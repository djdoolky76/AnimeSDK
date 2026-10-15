#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IGCHDHFMPBJ;
namespace System { class Object; }

#define IGCHDHFMPBJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E61C160)
#define IGCHDHFMPBJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E61C1A0)
#define IGCHDHFMPBJ___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E61C1B0)

inline static constexpr unsigned int IGCHDHFMPBJ___c_TypeDefinitionIndex = 25240;

	class IGCHDHFMPBJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4ACB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGCHDHFMPBJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGCHDHFMPBJ___C_CTOR_OFFSET))(this);
		}

		::IGCHDHFMPBJ* __cctor_b__33_0()
		{
			return ((::IGCHDHFMPBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGCHDHFMPBJ___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
