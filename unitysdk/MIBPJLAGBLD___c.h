#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Exception; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIBPJLAGBLD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB94B1B0)
#define MIBPJLAGBLD___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB94B1F0)
#define MIBPJLAGBLD___C__CONFIRMLOAN_B__7_2_OFFSET UNITYSDK_OFFSET(0xB94B200)

inline static constexpr unsigned int MIBPJLAGBLD___c_TypeDefinitionIndex = 76460;

	class MIBPJLAGBLD___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Exception*>** StaticGet___9__7_2()
		{
			return (::System::Action_1<::System::Exception*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69500);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69508);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIBPJLAGBLD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIBPJLAGBLD___C_CTOR_OFFSET))(this);
		}

		::System::Void _ConfirmLoan_b__7_2(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + MIBPJLAGBLD___C__CONFIRMLOAN_B__7_2_OFFSET))(this, a1);
		}

	};
