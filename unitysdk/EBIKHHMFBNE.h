#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OHHCLPOMFPF;
namespace RPG::Client { class MusicVisualization_SpectrumEffectBase; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EBIKHHMFBNE_BGCFIFJAHNE_OFFSET UNITYSDK_OFFSET(0x1C3C3660)
#define EBIKHHMFBNE_BLILPFLHOHM_OFFSET UNITYSDK_OFFSET(0x1C3C2E60)
#define EBIKHHMFBNE_CAAIMPACNAA_OFFSET UNITYSDK_OFFSET(0x1C3C2C60)
#define EBIKHHMFBNE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C3C2630)
#define EBIKHHMFBNE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C3C26E0)
#define EBIKHHMFBNE_EAEKAJEPHGJ_OFFSET UNITYSDK_OFFSET(0x1C3C47A0)
#define EBIKHHMFBNE_EEOOIEELFFG_OFFSET UNITYSDK_OFFSET(0x1C3C3980)
#define EBIKHHMFBNE_EJKFEINCOFO_OFFSET UNITYSDK_OFFSET(0x1C3C2DD0)
#define EBIKHHMFBNE_FDCJJKHPAEE_OFFSET UNITYSDK_OFFSET(0x1C3C2840)
#define EBIKHHMFBNE_GET_PLAYINGID_OFFSET UNITYSDK_OFFSET(0x1C3C4780)
#define EBIKHHMFBNE_GPOLJCMHFLB_OFFSET UNITYSDK_OFFSET(0x1C3C2B80)
#define EBIKHHMFBNE_HAOJDKJPPNE_OFFSET UNITYSDK_OFFSET(0x1C3C27F0)
#define EBIKHHMFBNE_IGFACEHBNJF_OFFSET UNITYSDK_OFFSET(0x1C3C2FD0)
#define EBIKHHMFBNE_IPFNFCDOHCJ_OFFSET UNITYSDK_OFFSET(0x1C3C2F40)
#define EBIKHHMFBNE_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1C3C2890)
#define EBIKHHMFBNE_KHEPAMJGADA_OFFSET UNITYSDK_OFFSET(0x1C3C32C0)
#define EBIKHHMFBNE_KMCGFFOCNKB_OFFSET UNITYSDK_OFFSET(0x1C3C2BD0)
#define EBIKHHMFBNE_LKFKPBKNCDH_OFFSET UNITYSDK_OFFSET(0x1C3C2CF0)
#define EBIKHHMFBNE_NDEGKDJNFLJ_OFFSET UNITYSDK_OFFSET(0x1C3C3490)
#define EBIKHHMFBNE_PEOJKIOGHCD_OFFSET UNITYSDK_OFFSET(0x1C3C3A40)
#define EBIKHHMFBNE_SET_PLAYINGID_OFFSET UNITYSDK_OFFSET(0x1C3C4790)

inline static constexpr unsigned int EBIKHHMFBNE_TypeDefinitionIndex = 61035;

	class EBIKHHMFBNE : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::OHHCLPOMFPF*>* ENJLNJDMKFH; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::MusicVisualization_SpectrumEffectBase*>* HBOEEDKHEMG; // 0x18
		::Il2CppArray<::System::Single>* MDOJCHKPGPI; // 0x20
		::System::UInt32 _PlayingID_k__BackingField; // 0x28
		::System::UInt32 EKNMMBFJHHF; // 0x2C
		::System::Single IBNLECGJEKG; // 0x30
		::System::Single FHOPJLOKIBE; // 0x34
		::System::Int32 JLMEOEADHNL; // 0x38
		// static const ::System::Object BFOPKBOHNLH; // 0x0
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EBIKHHMFBNE_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBIKHHMFBNE_DISPOSE_OFFSET))(this);
		}

		::System::Void HAOJDKJPPNE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EBIKHHMFBNE_HAOJDKJPPNE_OFFSET))(this, a1);
		}

		::System::Void FDCJJKHPAEE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EBIKHHMFBNE_FDCJJKHPAEE_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EBIKHHMFBNE_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Single GPOLJCMHFLB(::System::String* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EBIKHHMFBNE_GPOLJCMHFLB_OFFSET))(this, a1);
		}

		::System::Single KMCGFFOCNKB(::System::String* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EBIKHHMFBNE_KMCGFFOCNKB_OFFSET))(this, a1);
		}

		::System::Single CAAIMPACNAA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EBIKHHMFBNE_CAAIMPACNAA_OFFSET))(this);
		}

		::System::Void LKFKPBKNCDH(::OHHCLPOMFPF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OHHCLPOMFPF*))((::PBYTE)hIl2Cpp + EBIKHHMFBNE_LKFKPBKNCDH_OFFSET))(this, a1);
		}

		::System::Void EJKFEINCOFO(::OHHCLPOMFPF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OHHCLPOMFPF*))((::PBYTE)hIl2Cpp + EBIKHHMFBNE_EJKFEINCOFO_OFFSET))(this, a1);
		}

		::System::Void BLILPFLHOHM(::RPG::Client::MusicVisualization_SpectrumEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MusicVisualization_SpectrumEffectBase*))((::PBYTE)hIl2Cpp + EBIKHHMFBNE_BLILPFLHOHM_OFFSET))(this, a1);
		}

		::System::Void IPFNFCDOHCJ(::RPG::Client::MusicVisualization_SpectrumEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MusicVisualization_SpectrumEffectBase*))((::PBYTE)hIl2Cpp + EBIKHHMFBNE_IPFNFCDOHCJ_OFFSET))(this, a1);
		}

		::System::Void IGFACEHBNJF(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EBIKHHMFBNE_IGFACEHBNJF_OFFSET))(this, a1);
		}

		::System::Void KHEPAMJGADA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBIKHHMFBNE_KHEPAMJGADA_OFFSET))(this);
		}

		::System::Void NDEGKDJNFLJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBIKHHMFBNE_NDEGKDJNFLJ_OFFSET))(this);
		}

		::System::Void BGCFIFJAHNE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EBIKHHMFBNE_BGCFIFJAHNE_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Single>* EEOOIEELFFG()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBIKHHMFBNE_EEOOIEELFFG_OFFSET))(this);
		}

		::System::Void PEOJKIOGHCD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EBIKHHMFBNE_PEOJKIOGHCD_OFFSET))(this, a1);
		}

		::System::UInt32 get_PlayingID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBIKHHMFBNE_GET_PLAYINGID_OFFSET))(this);
		}

		::System::Void set_PlayingID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EBIKHHMFBNE_SET_PLAYINGID_OFFSET))(this, a1);
		}

		::System::Int32 EAEKAJEPHGJ()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBIKHHMFBNE_EAEKAJEPHGJ_OFFSET))(this);
		}

	};
