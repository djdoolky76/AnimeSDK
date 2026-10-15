#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LogType.h"
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T> class BlockingCollection_1; }
namespace System::IO { class FileStream; }
namespace System::Threading { class Thread; }

#define PHEMNMILGND_CCTOR_OFFSET UNITYSDK_OFFSET(0xC241D90)
#define PHEMNMILGND_CTOR_OFFSET UNITYSDK_OFFSET(0xC2412E0)
#define PHEMNMILGND_DOMMOJEBNIN_OFFSET UNITYSDK_OFFSET(0xC2416A0)
#define PHEMNMILGND_GLLEGCNKOJM_OFFSET UNITYSDK_OFFSET(0xC240FD0)
#define PHEMNMILGND_HFDOJNAACOM_OFFSET UNITYSDK_OFFSET(0xC241480)
#define PHEMNMILGND_KFMHFDHJANO_OFFSET UNITYSDK_OFFSET(0xC241170)
#define PHEMNMILGND_NDLHPJGNKDI_OFFSET UNITYSDK_OFFSET(0xC2411C0)
#define PHEMNMILGND_PDKLDMNAJBO_OFFSET UNITYSDK_OFFSET(0xC241BF0)

inline static constexpr unsigned int PHEMNMILGND_TypeDefinitionIndex = 60065;

	class PHEMNMILGND : public ::System::Object
	{
	public:
		::System::Collections::Concurrent::BlockingCollection_1<::System::String*>* DKEJNELHLKI; // 0x10
		::System::Threading::Thread* PLLBOODLIOL; // 0x18
		::System::IO::FileStream* AAAEHABLOHH; // 0x20
		static ::System::Boolean* StaticGet_CIGNLGMJCCO()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PHEMNMILGND")->GetStaticField(0x15AF0);
		}

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PHEMNMILGND_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHEMNMILGND_CCTOR_OFFSET))();
		}

		static ::System::String* GLLEGCNKOJM()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + PHEMNMILGND_GLLEGCNKOJM_OFFSET))();
		}

		static ::System::String* KFMHFDHJANO()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + PHEMNMILGND_KFMHFDHJANO_OFFSET))();
		}

		static ::System::Void NDLHPJGNKDI(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + PHEMNMILGND_NDLHPJGNKDI_OFFSET))(a1, a2);
		}

		::System::Void HFDOJNAACOM(::System::String* a1, ::System::String* a2, ::UnityEngine::LogType a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::LogType))((::PBYTE)hIl2Cpp + PHEMNMILGND_HFDOJNAACOM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DOMMOJEBNIN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHEMNMILGND_DOMMOJEBNIN_OFFSET))(this);
		}

		::System::Void PDKLDMNAJBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHEMNMILGND_PDKLDMNAJBO_OFFSET))(this);
		}

	};
