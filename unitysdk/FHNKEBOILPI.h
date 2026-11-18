#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Project::Config { class BabelFloorInfoTemplateExt; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FHNKEBOILPI_KCDMOBPHDEH_OFFSET UNITYSDK_OFFSET(0x1B8621A0)
#define FHNKEBOILPI__CTOR_OFFSET UNITYSDK_OFFSET(0x1B862080)

inline static constexpr unsigned int FHNKEBOILPI_TypeDefinitionIndex = 9715;

class FHNKEBOILPI : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* PPCBKPIIKIF; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* ACDGAPIJGPB; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* FNEGMICLFJP; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Project::Config::BabelFloorInfoTemplateExt*>* CMCFAONFIJM; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNKEBOILPI__CTOR_OFFSET))(this);
	}

	::MoleMole::Project::Config::BabelFloorInfoTemplateExt* KCDMOBPHDEH(::System::Int32 CCKGEOKCJMA)
	{
		return ((::MoleMole::Project::Config::BabelFloorInfoTemplateExt*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FHNKEBOILPI_KCDMOBPHDEH_OFFSET))(this, CCKGEOKCJMA);
	}
};
