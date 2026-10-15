#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/FilterMode.h"
#include "unitysdk/UnityEngine/RenderTextureFormat.h"
#include "unitysdk/UnityEngine/RenderTextureReadWrite.h"
#include "unitysdk/UnityEngine/TextureWrapMode.h"
class IBCIBKEIBOE;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EGKACBIBCML_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0x14519050)
#define EGKACBIBCML_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x14518D50)
#define EGKACBIBCML_CCTOR_OFFSET UNITYSDK_OFFSET(0x14519720)
#define EGKACBIBCML_EFJPJNJDFJM_OFFSET UNITYSDK_OFFSET(0x145191B0)
#define EGKACBIBCML_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x14519490)

inline static constexpr unsigned int EGKACBIBCML_TypeDefinitionIndex = 70173;

	class EGKACBIBCML : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::IBCIBKEIBOE*>** StaticGet_ADICELELNNA()
		{
			return (::System::Collections::Generic::List_1<::IBCIBKEIBOE*>**)UnitySDK::FromName("", "EGKACBIBCML")->GetStaticField(0x2E00);
		}

		static ::System::Collections::Generic::List_1<::IBCIBKEIBOE*>** StaticGet_HCNAHGKCCKG()
		{
			return (::System::Collections::Generic::List_1<::IBCIBKEIBOE*>**)UnitySDK::FromName("", "EGKACBIBCML")->GetStaticField(0x2E08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGKACBIBCML_CCTOR_OFFSET))();
		}

		static ::IBCIBKEIBOE* BPLPBPMEODA(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::RenderTextureFormat a4, ::UnityEngine::RenderTextureReadWrite a5, ::System::Int32 a6, ::System::String* a7, ::UnityEngine::TextureWrapMode a8, ::UnityEngine::FilterMode a9)
		{
			return ((::IBCIBKEIBOE*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat, ::UnityEngine::RenderTextureReadWrite, ::System::Int32, ::System::String*, ::UnityEngine::TextureWrapMode, ::UnityEngine::FilterMode))((::PBYTE)hIl2Cpp + EGKACBIBCML_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::System::Void ABKBOGIGAEH(::IBCIBKEIBOE* a1)
		{
			return ((::System::Void(*)(::IBCIBKEIBOE*))((::PBYTE)hIl2Cpp + EGKACBIBCML_ABKBOGIGAEH_OFFSET))(a1);
		}

		static ::System::Void EFJPJNJDFJM()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGKACBIBCML_EFJPJNJDFJM_OFFSET))();
		}

		static ::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGKACBIBCML_PJPFIHFAHGO_OFFSET))();
		}

	};
