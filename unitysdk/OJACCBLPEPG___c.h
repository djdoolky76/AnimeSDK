#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBABAAOHGHH;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define OJACCBLPEPG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC79FB60)
#define OJACCBLPEPG___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC79FB90)
#define OJACCBLPEPG___C__SKIPVIRTUALTIMETABLETONEXTSUBWAYARRIVED_B__28_0_OFFSET UNITYSDK_OFFSET(0xC79FBA0)

inline static constexpr unsigned int OJACCBLPEPG___c_TypeDefinitionIndex = 61104;

	class OJACCBLPEPG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x561B0);
		}

		static ::System::Func_2<::CBABAAOHGHH*, ::System::Boolean>** StaticGet___9__28_0()
		{
			return (::System::Func_2<::CBABAAOHGHH*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x561B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJACCBLPEPG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJACCBLPEPG___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _SkipVirtualTimetableToNextSubwayArrived_b__28_0(::CBABAAOHGHH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CBABAAOHGHH*))((::PBYTE)hIl2Cpp + OJACCBLPEPG___C__SKIPVIRTUALTIMETABLETONEXTSUBWAYARRIVED_B__28_0_OFFSET))(this, a1);
		}

	};
