#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MusicRhythmPhase; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DBDAGGLHIIB_CIOEDCPDEPA_OFFSET UNITYSDK_OFFSET(0xDFDBC20)
#define DBDAGGLHIIB_CTOR_OFFSET UNITYSDK_OFFSET(0xDFDCB00)

	class DBDAGGLHIIB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBDAGGLHIIB_CTOR_OFFSET))(this);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmPhase*>* CIOEDCPDEPA()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmPhase*>*(*)())((::PBYTE)hIl2Cpp + DBDAGGLHIIB_CIOEDCPDEPA_OFFSET))();
		}

	};
