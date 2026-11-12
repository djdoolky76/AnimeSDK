#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
class NJKFOJJDGGG;
namespace RPG::Client { class GridFightRole; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define ANMKNHJIAMA_BHLMNGBCHII_OFFSET UNITYSDK_OFFSET(0x16711490)
#define ANMKNHJIAMA_CTOR_OFFSET UNITYSDK_OFFSET(0x16711300)
#define ANMKNHJIAMA_DABHDKOCPNK_OFFSET UNITYSDK_OFFSET(0x16711400)
#define ANMKNHJIAMA_JPNGMFBBELP_OFFSET UNITYSDK_OFFSET(0x167115F0)
#define ANMKNHJIAMA_MNBHLAJGKOH_OFFSET UNITYSDK_OFFSET(0x16711360)
#define ANMKNHJIAMA_PIALGEIPPPB_OFFSET UNITYSDK_OFFSET(0x16711540)
#define ANMKNHJIAMA_UPDATE_OFFSET UNITYSDK_OFFSET(0x16711310)

inline static constexpr unsigned int ANMKNHJIAMA_TypeDefinitionIndex = 66637;

	class ANMKNHJIAMA : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + ANMKNHJIAMA_CTOR_OFFSET))(this, a1);
		}

		::System::Void Update(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + ANMKNHJIAMA_UPDATE_OFFSET))(this, a1);
		}

		::System::UInt32 MNBHLAJGKOH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANMKNHJIAMA_MNBHLAJGKOH_OFFSET))(this);
		}

		static ::System::Boolean DABHDKOCPNK(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ANMKNHJIAMA_DABHDKOCPNK_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* BHLMNGBCHII(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + ANMKNHJIAMA_BHLMNGBCHII_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* PIALGEIPPPB(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ANMKNHJIAMA_PIALGEIPPPB_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* JPNGMFBBELP()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + ANMKNHJIAMA_JPNGMFBBELP_OFFSET))();
		}

	};
