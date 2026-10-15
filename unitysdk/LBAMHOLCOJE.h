#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DIFEEJPHMJC.h"
#include "unitysdk/System/Object.h"
class EILOGENDCCG;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LBAMHOLCOJE_AABALFLGKPE_OFFSET UNITYSDK_OFFSET(0xB5EC190)
#define LBAMHOLCOJE_CCTOR_OFFSET UNITYSDK_OFFSET(0xB5ECB40)
#define LBAMHOLCOJE_DBAGALBCODO_OFFSET UNITYSDK_OFFSET(0xB5EB6A0)
#define LBAMHOLCOJE_FNPMJDIAOCM_OFFSET UNITYSDK_OFFSET(0xB5EAE90)
#define LBAMHOLCOJE_HJKJONMPKOK_OFFSET UNITYSDK_OFFSET(0xB5EC2E0)
#define LBAMHOLCOJE_ILPFNEBPHBF_OFFSET UNITYSDK_OFFSET(0xB5EB040)
#define LBAMHOLCOJE_JDKCDJNJAOL_OFFSET UNITYSDK_OFFSET(0xB5ECAC0)
#define LBAMHOLCOJE_OICINKKCCCD_OFFSET UNITYSDK_OFFSET(0xB5EBD40)
#define LBAMHOLCOJE_OPMLENHJBIH_OFFSET UNITYSDK_OFFSET(0xB5EB430)

inline static constexpr unsigned int LBAMHOLCOJE_TypeDefinitionIndex = 56529;

	class LBAMHOLCOJE : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::DIFEEJPHMJC>** StaticGet_DGEJECBNNLO()
		{
			return (::System::Collections::Generic::HashSet_1<::DIFEEJPHMJC>**)UnitySDK::FromName("", "LBAMHOLCOJE")->GetStaticField(0x53B70);
		}

		static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_ENKNDGOHBIN()
		{
			return (::System::Collections::Generic::List_1<::System::Object*>**)UnitySDK::FromName("", "LBAMHOLCOJE")->GetStaticField(0x53B78);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TargetEvaluator*>** StaticGet_LJPBMKPNDLP()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TargetEvaluator*>**)UnitySDK::FromName("", "LBAMHOLCOJE")->GetStaticField(0x53B80);
		}

		static ::System::Collections::Generic::Dictionary_2<::DIFEEJPHMJC, ::EILOGENDCCG*>** StaticGet_HCLPCNHFLCG()
		{
			return (::System::Collections::Generic::Dictionary_2<::DIFEEJPHMJC, ::EILOGENDCCG*>**)UnitySDK::FromName("", "LBAMHOLCOJE")->GetStaticField(0x53B88);
		}

		// static const ::System::String* GNEINLIJOBC; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBAMHOLCOJE_CCTOR_OFFSET))();
		}

		static ::System::Void FNPMJDIAOCM()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBAMHOLCOJE_FNPMJDIAOCM_OFFSET))();
		}

		static ::System::Void ILPFNEBPHBF(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TargetEvaluator*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TargetEvaluator*>*, ::System::String*))((::PBYTE)hIl2Cpp + LBAMHOLCOJE_ILPFNEBPHBF_OFFSET))(a1, a2);
		}

		static ::System::Void OPMLENHJBIH(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TargetEvaluator*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TargetEvaluator*>*, ::System::String*))((::PBYTE)hIl2Cpp + LBAMHOLCOJE_OPMLENHJBIH_OFFSET))(a1, a2);
		}

		static ::System::Void DBAGALBCODO(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + LBAMHOLCOJE_DBAGALBCODO_OFFSET))(a1, a2);
		}

		static ::System::Void OICINKKCCCD(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LBAMHOLCOJE_OICINKKCCCD_OFFSET))(a1);
		}

		static ::System::Void AABALFLGKPE()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBAMHOLCOJE_AABALFLGKPE_OFFSET))();
		}

		static ::EILOGENDCCG* HJKJONMPKOK(::DIFEEJPHMJC a1)
		{
			return ((::EILOGENDCCG*(*)(::DIFEEJPHMJC))((::PBYTE)hIl2Cpp + LBAMHOLCOJE_HJKJONMPKOK_OFFSET))(a1);
		}

		static ::System::Boolean JDKCDJNJAOL()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LBAMHOLCOJE_JDKCDJNJAOL_OFFSET))();
		}

	};
