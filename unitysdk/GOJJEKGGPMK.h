#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGFNFLBFBPC;
namespace RPG::Client { class PunkLordData; }
namespace RPG::Client { class PunkLordHonor; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GOJJEKGGPMK_BFAOOPJKFFP_OFFSET UNITYSDK_OFFSET(0x15B29930)
#define GOJJEKGGPMK_CKJLMNMINGK_OFFSET UNITYSDK_OFFSET(0x15B2A080)
#define GOJJEKGGPMK_DGOBBIGHNJP_OFFSET UNITYSDK_OFFSET(0x15B2A2B0)
#define GOJJEKGGPMK_HLINOGHEIKI_OFFSET UNITYSDK_OFFSET(0x15B29BF0)
#define GOJJEKGGPMK_LDLGNBILCLH_OFFSET UNITYSDK_OFFSET(0x15B29E80)
#define GOJJEKGGPMK_LOIAADLMFCF_OFFSET UNITYSDK_OFFSET(0x15B297B0)
#define GOJJEKGGPMK_MOGJMPCIHGB_OFFSET UNITYSDK_OFFSET(0x15B29270)

inline static constexpr unsigned int GOJJEKGGPMK_TypeDefinitionIndex = 66760;

	class GOJJEKGGPMK : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::Client::PunkLordHonor*>* MOGJMPCIHGB(::RPG::Client::PunkLordData* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PunkLordHonor*>*(*)(::RPG::Client::PunkLordData*))((::PBYTE)hIl2Cpp + GOJJEKGGPMK_MOGJMPCIHGB_OFFSET))(a1);
		}

		static ::System::Void LOIAADLMFCF(::System::Object* a1, ::System::Collections::Generic::List_1<::BGFNFLBFBPC*>* a2)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Collections::Generic::List_1<::BGFNFLBFBPC*>*))((::PBYTE)hIl2Cpp + GOJJEKGGPMK_LOIAADLMFCF_OFFSET))(a1, a2);
		}

		static ::System::Void BFAOOPJKFFP(::System::Object* a1, ::System::Collections::Generic::List_1<::BGFNFLBFBPC*>* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Collections::Generic::List_1<::BGFNFLBFBPC*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + GOJJEKGGPMK_BFAOOPJKFFP_OFFSET))(a1, a2, a3);
		}

		static ::System::Void HLINOGHEIKI(::System::Object* a1, ::System::Collections::Generic::List_1<::BGFNFLBFBPC*>* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Collections::Generic::List_1<::BGFNFLBFBPC*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + GOJJEKGGPMK_HLINOGHEIKI_OFFSET))(a1, a2, a3);
		}

		static ::System::Void LDLGNBILCLH(::System::Object* a1, ::System::Collections::Generic::List_1<::BGFNFLBFBPC*>* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Collections::Generic::List_1<::BGFNFLBFBPC*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + GOJJEKGGPMK_LDLGNBILCLH_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CKJLMNMINGK(::System::Object* a1, ::System::Collections::Generic::List_1<::BGFNFLBFBPC*>* a2)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Collections::Generic::List_1<::BGFNFLBFBPC*>*))((::PBYTE)hIl2Cpp + GOJJEKGGPMK_CKJLMNMINGK_OFFSET))(a1, a2);
		}

		static ::System::Void DGOBBIGHNJP(::System::Object* a1, ::System::Collections::Generic::List_1<::BGFNFLBFBPC*>* a2)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Collections::Generic::List_1<::BGFNFLBFBPC*>*))((::PBYTE)hIl2Cpp + GOJJEKGGPMK_DGOBBIGHNJP_OFFSET))(a1, a2);
		}

	};
