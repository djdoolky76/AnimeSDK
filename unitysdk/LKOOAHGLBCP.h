#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::Client { template <typename T1, typename T2> class LRUCache_2; }
namespace System { class String; }

#define LKOOAHGLBCP_CTOR_OFFSET UNITYSDK_OFFSET(0xB754AF0)
#define LKOOAHGLBCP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB754D00)
#define LKOOAHGLBCP_EHOKOANFIEH_OFFSET UNITYSDK_OFFSET(0xB754D80)
#define LKOOAHGLBCP_HHAGAEJJNID_OFFSET UNITYSDK_OFFSET(0xB754B90)
#define LKOOAHGLBCP_JBOLCKNEOPF_OFFSET UNITYSDK_OFFSET(0xB754C30)

inline static constexpr unsigned int LKOOAHGLBCP_TypeDefinitionIndex = 69536;

	class LKOOAHGLBCP : public ::System::Object
	{
	public:
		::RPG::Client::CameraBlendCurve* IBKIDIOCBNI; // 0x10
		::RPG::Client::LRUCache_2<::System::String*, ::RPG::Client::CameraBlendCurve*>* LPNLIEBEJBO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKOOAHGLBCP_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::CameraBlendCurve* HHAGAEJJNID(::System::String* a1)
		{
			return ((::RPG::Client::CameraBlendCurve*(*)(::System::String*))((::PBYTE)hIl2Cpp + LKOOAHGLBCP_HHAGAEJJNID_OFFSET))(a1);
		}

		::RPG::Client::CameraBlendCurve* JBOLCKNEOPF(::System::String* a1)
		{
			return ((::RPG::Client::CameraBlendCurve*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LKOOAHGLBCP_JBOLCKNEOPF_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKOOAHGLBCP_DISPOSE_OFFSET))(this);
		}

		::System::Void EHOKOANFIEH(::RPG::Client::CameraBlendCurve* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraBlendCurve*))((::PBYTE)hIl2Cpp + LKOOAHGLBCP_EHOKOANFIEH_OFFSET))(this, a1);
		}

	};
