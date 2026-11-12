#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKNOCNDPAJA;
namespace System { class Object; }

#define GKNOCNDPAJA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7AEDB0)
#define GKNOCNDPAJA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7AEDF0)
#define GKNOCNDPAJA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F7AEE00)

inline static constexpr unsigned int GKNOCNDPAJA___c_TypeDefinitionIndex = 27580;

	class GKNOCNDPAJA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x15F10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKNOCNDPAJA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNOCNDPAJA___C_CTOR_OFFSET))(this);
		}

		::GKNOCNDPAJA* __cctor_b__33_0()
		{
			return ((::GKNOCNDPAJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNOCNDPAJA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
