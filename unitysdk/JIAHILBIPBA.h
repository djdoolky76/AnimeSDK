#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
class KOCDPFMMHIN;
namespace RPG::Client { class RPGProfilerMarker; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JIAHILBIPBA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD865D0)
#define JIAHILBIPBA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD85B10)
#define JIAHILBIPBA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DD86350)
#define JIAHILBIPBA_EHFLDBMLBPM_OFFSET UNITYSDK_OFFSET(0x1DD85E90)
#define JIAHILBIPBA_EMLECBJHPHN_OFFSET UNITYSDK_OFFSET(0x1DD86460)
#define JIAHILBIPBA_GIMOCJDJNEA_OFFSET UNITYSDK_OFFSET(0x1DD85E70)
#define JIAHILBIPBA_IGBILCMNKMD_OFFSET UNITYSDK_OFFSET(0x1DD860F0)
#define JIAHILBIPBA_JLJMIHALBNN_OFFSET UNITYSDK_OFFSET(0x1DD86390)
#define JIAHILBIPBA_KFFDCBEDNFG_OFFSET UNITYSDK_OFFSET(0x1DD84780)
#define JIAHILBIPBA_KHNCMBEFIKI_OFFSET UNITYSDK_OFFSET(0x1DD86260)
#define JIAHILBIPBA_PHFIEDGBECP_OFFSET UNITYSDK_OFFSET(0x1DD84990)

inline static constexpr unsigned int JIAHILBIPBA_TypeDefinitionIndex = 44898;

	class JIAHILBIPBA : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::KOCDPFMMHIN*>* FBHMMHICDDG; // 0x10
		::System::Boolean MOEIOHNLLBF; // 0x18
		::System::Boolean LINBEGOFFLB; // 0x19
		static ::RPG::Client::RPGProfilerMarker** StaticGet_CADCEEPBCDC()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "JIAHILBIPBA")->GetStaticField(0xFB0);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_EOPGCINLMOA()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "JIAHILBIPBA")->GetStaticField(0xFB8);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_ACGJKBIKNMN()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "JIAHILBIPBA")->GetStaticField(0xFC0);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_BLEGGAFMDAJ()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "JIAHILBIPBA")->GetStaticField(0xFC8);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_DHENEGNOJBE()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "JIAHILBIPBA")->GetStaticField(0xFD0);
		}

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JIAHILBIPBA_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JIAHILBIPBA_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIAHILBIPBA_DISPOSE_OFFSET))(this);
		}

		::System::Void JLJMIHALBNN(::KOCDPFMMHIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KOCDPFMMHIN*))((::PBYTE)hIl2Cpp + JIAHILBIPBA_JLJMIHALBNN_OFFSET))(this, a1);
		}

		::System::Void KFFDCBEDNFG(::KOCDPFMMHIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KOCDPFMMHIN*))((::PBYTE)hIl2Cpp + JIAHILBIPBA_KFFDCBEDNFG_OFFSET))(this, a1);
		}

		::System::Void EHFLDBMLBPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIAHILBIPBA_EHFLDBMLBPM_OFFSET))(this);
		}

		::System::Void IGBILCMNKMD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIAHILBIPBA_IGBILCMNKMD_OFFSET))(this);
		}

		::System::Void KHNCMBEFIKI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIAHILBIPBA_KHNCMBEFIKI_OFFSET))(this);
		}

		::System::Void PHFIEDGBECP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIAHILBIPBA_PHFIEDGBECP_OFFSET))(this);
		}

		::System::Nullable_1<::Unity::Jobs::JobHandle> EMLECBJHPHN(::System::Collections::Generic::List_1<::KOCDPFMMHIN*>* a1)
		{
			return ((::System::Nullable_1<::Unity::Jobs::JobHandle>(*)(::PVOID, ::System::Collections::Generic::List_1<::KOCDPFMMHIN*>*))((::PBYTE)hIl2Cpp + JIAHILBIPBA_EMLECBJHPHN_OFFSET))(this, a1);
		}

		::System::Int32 GIMOCJDJNEA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIAHILBIPBA_GIMOCJDJNEA_OFFSET))(this);
		}

	};
