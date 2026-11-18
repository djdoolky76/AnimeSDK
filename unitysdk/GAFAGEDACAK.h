#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"

class EAIOHODECAO;
class KHKBGDCIAEM;
class KKGDDLOEICI;
class NBDEOHKBODI;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Texture2D; }

#define GAFAGEDACAK_BKOGIPNHMFH_OFFSET UNITYSDK_OFFSET(0x1EEE4F30)
#define GAFAGEDACAK_BLNNEABEFJO_OFFSET UNITYSDK_OFFSET(0x1EEE56E0)
#define GAFAGEDACAK_DEPKMBJFAAD_OFFSET UNITYSDK_OFFSET(0x1EEE5760)
#define GAFAGEDACAK_KOCKMDIHNII_OFFSET UNITYSDK_OFFSET(0x1EEE5420)
#define GAFAGEDACAK_LDLPOGCIILO_OFFSET UNITYSDK_OFFSET(0x1EEE4FE0)
#define GAFAGEDACAK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EEE4F20)

inline static constexpr unsigned int GAFAGEDACAK_TypeDefinitionIndex = 94958;

class GAFAGEDACAK : public ::System::Object
{
public:
	static ::System::Single* StaticGet_CIDLKIMHCGJ()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(GAFAGEDACAK_TypeDefinitionIndex)->GetStaticField(0x13F90);
	}
	// static const ::System::String* LEDNKDIGFGB; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAFAGEDACAK__CCTOR_OFFSET))();
	}

	static ::System::Boolean BKOGIPNHMFH(::KHKBGDCIAEM* FAIPFCNDLDE, ::KKGDDLOEICI* JHHBIKGHEJG, ::System::Action* PABLEDCGDGM, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::AssetRequestHandle>* CAPNNMJCBPO)
	{
		return ((::System::Boolean(*)(::KHKBGDCIAEM*, ::KKGDDLOEICI*, ::System::Action*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + GAFAGEDACAK_BKOGIPNHMFH_OFFSET))(FAIPFCNDLDE, JHHBIKGHEJG, PABLEDCGDGM, CAPNNMJCBPO);
	}

	static ::System::Boolean LDLPOGCIILO(::KHKBGDCIAEM* FAIPFCNDLDE, ::KKGDDLOEICI* JHHBIKGHEJG, ::System::Action* PABLEDCGDGM, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::AssetRequestHandle>* CAPNNMJCBPO)
	{
		return ((::System::Boolean(*)(::KHKBGDCIAEM*, ::KKGDDLOEICI*, ::System::Action*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + GAFAGEDACAK_LDLPOGCIILO_OFFSET))(FAIPFCNDLDE, JHHBIKGHEJG, PABLEDCGDGM, CAPNNMJCBPO);
	}

	static ::System::UInt32 BLNNEABEFJO(::EAIOHODECAO* MBGBPLKKNOD)
	{
		return ((::System::UInt32(*)(::EAIOHODECAO*))((::PBYTE)hIl2Cpp + GAFAGEDACAK_BLNNEABEFJO_OFFSET))(MBGBPLKKNOD);
	}

	static ::UnityEngine::Texture2D* KOCKMDIHNII(::System::Int32 MBIFIDFKIJN, ::System::String* CIOAFOKNMJC, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::AssetRequestHandle>* CAPNNMJCBPO)
	{
		return ((::UnityEngine::Texture2D*(*)(::System::Int32, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + GAFAGEDACAK_KOCKMDIHNII_OFFSET))(MBIFIDFKIJN, CIOAFOKNMJC, CAPNNMJCBPO);
	}

	static ::NBDEOHKBODI* DEPKMBJFAAD(::EAIOHODECAO* MBGBPLKKNOD)
	{
		return ((::NBDEOHKBODI*(*)(::EAIOHODECAO*))((::PBYTE)hIl2Cpp + GAFAGEDACAK_DEPKMBJFAAD_OFFSET))(MBGBPLKKNOD);
	}
};
