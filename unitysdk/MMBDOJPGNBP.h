#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GNJJCPBPBFL;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MMBDOJPGNBP_GFEBKMOMANC_1_OFFSET UNITYSDK_OFFSET(0x13025AB0)
#define MMBDOJPGNBP_GFEBKMOMANC_OFFSET UNITYSDK_OFFSET(0x13024BA0)
#define MMBDOJPGNBP_HAELCIMKDJO_1_OFFSET UNITYSDK_OFFSET(0x130256A0)
#define MMBDOJPGNBP_HAELCIMKDJO_OFFSET UNITYSDK_OFFSET(0x13025070)
#define MMBDOJPGNBP_HGELNLDAEIE_OFFSET UNITYSDK_OFFSET(0x13025DF0)
#define MMBDOJPGNBP_JIPDFOFJACI_OFFSET UNITYSDK_OFFSET(0x13024EE0)
#define MMBDOJPGNBP_JLPOLNPLAMH_OFFSET UNITYSDK_OFFSET(0x130252A0)

inline static constexpr unsigned int MMBDOJPGNBP_TypeDefinitionIndex = 58213;

class MMBDOJPGNBP : public ::System::Object
{
public:
	static ::System::Void GFEBKMOMANC(::System::Collections::Generic::List_1<::System::UInt32>* PNLAPEHCLAG, ::System::Int32 DBAJKFGDMDD, ::System::Int32 KNAIFDMNFHN)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MMBDOJPGNBP_GFEBKMOMANC_OFFSET))(PNLAPEHCLAG, DBAJKFGDMDD, KNAIFDMNFHN);
	}

	static ::System::UInt32 JIPDFOFJACI()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + MMBDOJPGNBP_JIPDFOFJACI_OFFSET))();
	}

	static ::MoleMole::EntityHandle HAELCIMKDJO(::System::UInt32 ACHBBPJIBIE, ::UnityEngine::Vector3 OHOGDOMNHNK, ::System::Single CFJFMMGPGKE)
	{
		return ((::MoleMole::EntityHandle(*)(::System::UInt32, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MMBDOJPGNBP_HAELCIMKDJO_OFFSET))(ACHBBPJIBIE, OHOGDOMNHNK, CFJFMMGPGKE);
	}

	static ::MoleMole::EntityHandle HAELCIMKDJO_1(::System::UInt32 ACHBBPJIBIE, ::System::String* DFCJFPNCLEO)
	{
		return ((::MoleMole::EntityHandle(*)(::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + MMBDOJPGNBP_HAELCIMKDJO_1_OFFSET))(ACHBBPJIBIE, DFCJFPNCLEO);
	}

	static ::MoleMole::EntityHandle JLPOLNPLAMH(::System::UInt32 ACHBBPJIBIE, ::GNJJCPBPBFL* EILGIOMAILG, ::UnityEngine::Vector3 OHOGDOMNHNK, ::System::Single CFJFMMGPGKE)
	{
		return ((::MoleMole::EntityHandle(*)(::System::UInt32, ::GNJJCPBPBFL*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MMBDOJPGNBP_JLPOLNPLAMH_OFFSET))(ACHBBPJIBIE, EILGIOMAILG, OHOGDOMNHNK, CFJFMMGPGKE);
	}

	static ::System::Void GFEBKMOMANC_1(::System::Collections::Generic::List_1<::System::Int32>* PNLAPEHCLAG, ::System::Int32 DBAJKFGDMDD, ::System::Int32 KNAIFDMNFHN)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MMBDOJPGNBP_GFEBKMOMANC_1_OFFSET))(PNLAPEHCLAG, DBAJKFGDMDD, KNAIFDMNFHN);
	}

	static ::System::Int32 HGELNLDAEIE(::System::UInt32 ACHBBPJIBIE)
	{
		return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MMBDOJPGNBP_HGELNLDAEIE_OFFSET))(ACHBBPJIBIE);
	}
};
