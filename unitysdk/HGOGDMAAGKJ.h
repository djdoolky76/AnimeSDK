#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJHMBGLPOLB;
class OOCCBMLAELL;
namespace RPG::GameCore { class TaskContext; }

#define HGOGDMAAGKJ_GJKMEONPKBC_OFFSET UNITYSDK_OFFSET(0x15CA6300)
#define HGOGDMAAGKJ_LHAHLKGOCMA_OFFSET UNITYSDK_OFFSET(0x15CA63E0)

inline static constexpr unsigned int HGOGDMAAGKJ_TypeDefinitionIndex = 55978;

	class HGOGDMAAGKJ : public ::System::Object
	{
	public:
		// static const ::System::Object IOGBIJDGAFP; // 0x0
		// static const ::System::Object JLMBNAMDDII; // 0x0
		// static const ::System::Object FMMLMGKNOGJ; // 0x0
		// static const ::System::Object DJMIBNLOCMJ; // 0x0
		// static const ::System::Object LEMOBPPOPIB; // 0x0
		// static const ::System::Object LBOBMCBKIJH; // 0x0
		// static const ::System::Object ANLBAKECKDC; // 0x0
		// static const ::System::Object OIKDCDIEHMF; // 0x0
		// static const ::System::Object OGOOODJJCHJ; // 0x0
		// static const ::System::Object DNCEDAPBMLH; // 0x0
		// static const ::System::Object BELPIFNANCD; // 0x0
		static ::OOCCBMLAELL* GJKMEONPKBC(::RPG::GameCore::TaskContext* a1)
		{
			return ((::OOCCBMLAELL*(*)(::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + HGOGDMAAGKJ_GJKMEONPKBC_OFFSET))(a1);
		}

		static ::BJHMBGLPOLB* LHAHLKGOCMA(::RPG::GameCore::TaskContext* a1)
		{
			return ((::BJHMBGLPOLB*(*)(::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + HGOGDMAAGKJ_LHAHLKGOCMA_OFFSET))(a1);
		}

	};
