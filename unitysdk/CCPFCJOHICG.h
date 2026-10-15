#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHPHMGHKGEN.h"
class AGKHOGNMPMO;
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }

#define CCPFCJOHICG_CCTOR_OFFSET UNITYSDK_OFFSET(0xC754080)
#define CCPFCJOHICG_CTOR_OFFSET UNITYSDK_OFFSET(0xC754070)
#define CCPFCJOHICG_DCAJKPMEDDB_OFFSET UNITYSDK_OFFSET(0xC753FB0)

inline static constexpr unsigned int CCPFCJOHICG_TypeDefinitionIndex = 49259;

	class CCPFCJOHICG : public ::JHPHMGHKGEN
	{
	public:
		::System::Action_1<::System::Boolean>* EOPEGKLDLLK; // 0x18
		static ::System::Action_3<::System::Int64, ::System::Boolean, ::AGKHOGNMPMO*>** StaticGet_PNAMDCHGGEH()
		{
			return (::System::Action_3<::System::Int64, ::System::Boolean, ::AGKHOGNMPMO*>**)UnitySDK::FromName("", "CCPFCJOHICG")->GetStaticField(0x15680);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPFCJOHICG_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCPFCJOHICG_CCTOR_OFFSET))();
		}

		static ::System::Void DCAJKPMEDDB(::System::Int64 a1, ::System::Boolean a2, ::AGKHOGNMPMO* a3)
		{
			return ((::System::Void(*)(::System::Int64, ::System::Boolean, ::AGKHOGNMPMO*))((::PBYTE)hIl2Cpp + CCPFCJOHICG_DCAJKPMEDDB_OFFSET))(a1, a2, a3);
		}

	};
