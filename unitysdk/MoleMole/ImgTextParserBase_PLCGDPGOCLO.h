#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ImgTextParserBase; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_IMGTEXTPARSERBASE_PLCGDPGOCLO_LNMLAIFPHMN_OFFSET UNITYSDK_OFFSET(0x1625A930)
#define MOLEMOLE_IMGTEXTPARSERBASE_PLCGDPGOCLO__CTOR_OFFSET UNITYSDK_OFFSET(0x1625A920)

namespace MoleMole
{
	inline static constexpr unsigned int ImgTextParserBase_PLCGDPGOCLO_TypeDefinitionIndex = 55326;

	class ImgTextParserBase_PLCGDPGOCLO : public ::System::Object
	{
	public:
		::MoleMole::ImgTextParserBase* KLHPEBKNIFB; // 0x10
		::System::Func_1<::System::String*>* HLCNFMGDBPI; // 0x18
		::System::Boolean NPPMJEIPMFC; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IMGTEXTPARSERBASE_PLCGDPGOCLO__CTOR_OFFSET))(this);
		}

		::System::String* LNMLAIFPHMN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IMGTEXTPARSERBASE_PLCGDPGOCLO_LNMLAIFPHMN_OFFSET))(this);
		}
	};
}
