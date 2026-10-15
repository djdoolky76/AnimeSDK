#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DEPIILNKIPE;
namespace System { class Object; }

#define DEPIILNKIPE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E16B870)
#define DEPIILNKIPE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E16B8B0)
#define DEPIILNKIPE___C___CCTOR_B__63_0_OFFSET UNITYSDK_OFFSET(0x1E16B8C0)

inline static constexpr unsigned int DEPIILNKIPE___c_TypeDefinitionIndex = 26217;

	class DEPIILNKIPE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2CB60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEPIILNKIPE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEPIILNKIPE___C_CTOR_OFFSET))(this);
		}

		::DEPIILNKIPE* __cctor_b__63_0()
		{
			return ((::DEPIILNKIPE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEPIILNKIPE___C___CCTOR_B__63_0_OFFSET))(this);
		}

	};
