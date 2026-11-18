#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityColorAdjustment; }
namespace MoleMole::Config { class ConfigEntityColorAdjustments; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EGPOFBNLKFF_EKKABLJHAAL_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x16997F50)
#define EGPOFBNLKFF_EKKABLJHAAL__CTOR_OFFSET UNITYSDK_OFFSET(0x16997F40)

inline static constexpr unsigned int EGPOFBNLKFF_EKKABLJHAAL_TypeDefinitionIndex = 54409;

class EGPOFBNLKFF_EKKABLJHAAL : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityColorAdjustment*>* INBACCBOBDN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGPOFBNLKFF_EKKABLJHAAL__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityColorAdjustment*>* FLIAEJGDMLI(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityColorAdjustments*>* FAICKFPPNKM)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityColorAdjustment*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityColorAdjustments*>*))((::PBYTE)hIl2Cpp + EGPOFBNLKFF_EKKABLJHAAL_FLIAEJGDMLI_OFFSET))(this, FAICKFPPNKM);
	}
};
