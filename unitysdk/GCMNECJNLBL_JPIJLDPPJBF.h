#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GCMNECJNLBL_EDOKBCEFKNO;
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GCMNECJNLBL_JPIJLDPPJBF_CCTOR_OFFSET UNITYSDK_OFFSET(0x15985AE0)
#define GCMNECJNLBL_JPIJLDPPJBF_EGKNKHEANAN_OFFSET UNITYSDK_OFFSET(0x15985530)
#define GCMNECJNLBL_JPIJLDPPJBF_HKEPJLDBGIG_OFFSET UNITYSDK_OFFSET(0x159854C0)
#define GCMNECJNLBL_JPIJLDPPJBF_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x159858E0)
#define GCMNECJNLBL_JPIJLDPPJBF_KAOLPGACCID_OFFSET UNITYSDK_OFFSET(0x15985700)

inline static constexpr unsigned int GCMNECJNLBL_JPIJLDPPJBF_TypeDefinitionIndex = 49217;

	class GCMNECJNLBL_JPIJLDPPJBF : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_JDICEOFMLDK()
		{
			return (::System::Collections::Generic::List_1<::System::Object*>**)UnitySDK::FromName("", "JPIJLDPPJBF")->GetStaticField(0x544C0);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>** StaticGet_JPIOMJKGNOC()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>**)UnitySDK::FromName("", "JPIJLDPPJBF")->GetStaticField(0x544C8);
		}

		static ::System::Int32* StaticGet_PILENEALLFH()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JPIJLDPPJBF")->GetStaticField(0x12BE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GCMNECJNLBL_JPIJLDPPJBF_CCTOR_OFFSET))();
		}

		static ::GCMNECJNLBL_EDOKBCEFKNO* HKEPJLDBGIG()
		{
			return ((::GCMNECJNLBL_EDOKBCEFKNO*(*)())((::PBYTE)hIl2Cpp + GCMNECJNLBL_JPIJLDPPJBF_HKEPJLDBGIG_OFFSET))();
		}

		static ::System::Int32 EGKNKHEANAN(::System::Action* a1)
		{
			return ((::System::Int32(*)(::System::Action*))((::PBYTE)hIl2Cpp + GCMNECJNLBL_JPIJLDPPJBF_EGKNKHEANAN_OFFSET))(a1);
		}

		static ::System::Void KAOLPGACCID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + GCMNECJNLBL_JPIJLDPPJBF_KAOLPGACCID_OFFSET))(a1);
		}

		static ::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GCMNECJNLBL_JPIJLDPPJBF_JLANKNHFKCN_OFFSET))();
		}

	};
