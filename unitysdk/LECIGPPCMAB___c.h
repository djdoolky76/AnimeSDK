#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LECIGPPCMAB;
namespace System { class Object; }

#define LECIGPPCMAB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8F7C60)
#define LECIGPPCMAB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8F7CA0)
#define LECIGPPCMAB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E8F7CB0)

inline static constexpr unsigned int LECIGPPCMAB___c_TypeDefinitionIndex = 32987;

	class LECIGPPCMAB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x309D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LECIGPPCMAB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LECIGPPCMAB___C_CTOR_OFFSET))(this);
		}

		::LECIGPPCMAB* __cctor_b__28_0()
		{
			return ((::LECIGPPCMAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LECIGPPCMAB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
