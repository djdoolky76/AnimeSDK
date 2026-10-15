#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GCMNECJNLBL_EDOKBCEFKNO;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GCMNECJNLBL_JPIJLDPPJBF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1597AB10)
#define GCMNECJNLBL_JPIJLDPPJBF_EGKNKHEANAN_OFFSET UNITYSDK_OFFSET(0x1597A560)
#define GCMNECJNLBL_JPIJLDPPJBF_HKEPJLDBGIG_OFFSET UNITYSDK_OFFSET(0x1597A4F0)
#define GCMNECJNLBL_JPIJLDPPJBF_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1597A910)
#define GCMNECJNLBL_JPIJLDPPJBF_KAOLPGACCID_OFFSET UNITYSDK_OFFSET(0x1597A730)

inline static constexpr unsigned int GCMNECJNLBL_JPIJLDPPJBF_TypeDefinitionIndex = 49217;

	class GCMNECJNLBL_JPIJLDPPJBF : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_JDICEOFMLDK()
		{
			return (::System::Collections::Generic::List_1<::System::Object*>**)UnitySDK::FromName("", "JPIJLDPPJBF")->GetStaticField(0x5B550);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>** StaticGet_JPIOMJKGNOC()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>**)UnitySDK::FromName("", "JPIJLDPPJBF")->GetStaticField(0x5B558);
		}

		static ::System::Int32* StaticGet_PILENEALLFH()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JPIJLDPPJBF")->GetStaticField(0x13B70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GCMNECJNLBL_JPIJLDPPJBF_CCTOR_OFFSET))();
		}

		static ::GCMNECJNLBL_EDOKBCEFKNO* HKEPJLDBGIG()
		{
			return ((::GCMNECJNLBL_EDOKBCEFKNO*(*)())((::PBYTE)hIl2Cpp + GCMNECJNLBL_JPIJLDPPJBF_HKEPJLDBGIG_OFFSET))();
		}

		static ::System::Int32 EGKNKHEANAN(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Int32(*)(::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + GCMNECJNLBL_JPIJLDPPJBF_EGKNKHEANAN_OFFSET))(a1);
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
