#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
namespace RPG::Client { class GraphicSpineMultiTrackController; }
namespace System { class Action; }
namespace System { class String; }

#define HPLDGLFMBEM_CTOR_OFFSET UNITYSDK_OFFSET(0x15DD1CB0)
#define HPLDGLFMBEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15DD1AE0)
#define HPLDGLFMBEM_DKKJNPPHDPM_OFFSET UNITYSDK_OFFSET(0x15DD1B30)
#define HPLDGLFMBEM_GET_CONTROLLER_OFFSET UNITYSDK_OFFSET(0x15DD1C90)
#define HPLDGLFMBEM_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0x15DD1A80)
#define HPLDGLFMBEM_NLDCFEENOGJ_OFFSET UNITYSDK_OFFSET(0x15DD1BE0)
#define HPLDGLFMBEM_PDOBCFNDCNF_OFFSET UNITYSDK_OFFSET(0x15DD1C40)
#define HPLDGLFMBEM_SET_CONTROLLER_OFFSET UNITYSDK_OFFSET(0x15DD1CA0)

	class HPLDGLFMBEM : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::Client::GraphicSpineMultiTrackController* _Controller_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLDGLFMBEM_CTOR_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF(::RPG::Client::GraphicSpineMultiTrackController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GraphicSpineMultiTrackController*))((::PBYTE)hIl2Cpp + HPLDGLFMBEM_LMCEDCHJKFF_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLDGLFMBEM_DISPOSE_OFFSET))(this);
		}

		::System::Void DKKJNPPHDPM(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + HPLDGLFMBEM_DKKJNPPHDPM_OFFSET))(this, a1, a2);
		}

		::System::Void PDOBCFNDCNF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLDGLFMBEM_PDOBCFNDCNF_OFFSET))(this);
		}

		::System::Boolean NLDCFEENOGJ(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HPLDGLFMBEM_NLDCFEENOGJ_OFFSET))(this, a1);
		}

		::RPG::Client::GraphicSpineMultiTrackController* get_Controller()
		{
			return ((::RPG::Client::GraphicSpineMultiTrackController*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLDGLFMBEM_GET_CONTROLLER_OFFSET))(this);
		}

		::System::Void set_Controller(::RPG::Client::GraphicSpineMultiTrackController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GraphicSpineMultiTrackController*))((::PBYTE)hIl2Cpp + HPLDGLFMBEM_SET_CONTROLLER_OFFSET))(this, a1);
		}

	};
