#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAANKGHDHCB.h"
#include "unitysdk/RPG/Client/AssetEventPort.h"
#include "unitysdk/RPG/Client/AssetEventType.h"
class HFCOGLIEHFB;
class KAANKGHDHCB;
namespace RPG::Client { class IAssetOperation; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HAHFIGMDCFH_CTOR_OFFSET UNITYSDK_OFFSET(0x15B6BE10)
#define HAHFIGMDCFH_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x15B6C230)
#define HAHFIGMDCFH_IMDLGFPMPEK_OFFSET UNITYSDK_OFFSET(0x15B6C370)
#define HAHFIGMDCFH_JIJEOJIJEBA_OFFSET UNITYSDK_OFFSET(0x15B6C820)

inline static constexpr unsigned int HAHFIGMDCFH_TypeDefinitionIndex = 82280;

	class HAHFIGMDCFH : public ::KAANKGHDHCB
	{
	public:
		::HFCOGLIEHFB* FPAHLFBBNMK; // 0x20
		::System::String* GKHIHPGCLIK; // 0x28
		::System::Collections::Generic::List_1<::KAANKGHDHCB*>* HIMBONECCJK; // 0x30
		::RPG::Client::AssetEventPort IGMPALOKGKF; // 0x38
		::RPG::Client::AssetEventType GMCNLFICNOB; // 0x3C
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + HAHFIGMDCFH_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAHFIGMDCFH_HKKFFCBJOKM_OFFSET))(this);
		}

		::System::Void IMDLGFPMPEK(::RPG::Client::IAssetOperation* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IAssetOperation*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + HAHFIGMDCFH_IMDLGFPMPEK_OFFSET))(this, a1, a2);
		}

		::System::Void JIJEOJIJEBA(::KAANKGHDHCB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KAANKGHDHCB*))((::PBYTE)hIl2Cpp + HAHFIGMDCFH_JIJEOJIJEBA_OFFSET))(this, a1);
		}

	};
