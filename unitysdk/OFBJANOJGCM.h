#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAANKGHDHCB.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"
class KAANKGHDHCB;
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OFBJANOJGCM_CTOR_OFFSET UNITYSDK_OFFSET(0xC6F4B10)
#define OFBJANOJGCM_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0xC6F4F60)
#define OFBJANOJGCM_JIJEOJIJEBA_OFFSET UNITYSDK_OFFSET(0xC6F51C0)

inline static constexpr unsigned int OFBJANOJGCM_TypeDefinitionIndex = 85144;

	class OFBJANOJGCM : public ::KAANKGHDHCB
	{
	public:
		::System::String* GKHIHPGCLIK; // 0x20
		::System::Collections::Generic::List_1<::KAANKGHDHCB*>* HIMBONECCJK; // 0x28
		::System::Type* EPGPJMHNBON; // 0x30
		::System::String* JIBMHCAGPNC; // 0x38
		::RPG::Client::CachedAssetLogicType HEOJLHCIINP; // 0x40
		static ::System::Int32* StaticGet_GMDBHJKEAEI()
		{
			return (::System::Int32*)UnitySDK::FromName("", "OFBJANOJGCM")->GetStaticField(0x14FC0);
		}

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + OFBJANOJGCM_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFBJANOJGCM_HKKFFCBJOKM_OFFSET))(this);
		}

		::System::Void JIJEOJIJEBA(::KAANKGHDHCB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KAANKGHDHCB*))((::PBYTE)hIl2Cpp + OFBJANOJGCM_JIJEOJIJEBA_OFFSET))(this, a1);
		}

	};
