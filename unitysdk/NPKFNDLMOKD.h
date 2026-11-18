#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigWindFieldProperty; }
namespace MoleMole::Config { class WindFieldConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPKFNDLMOKD_APEKLPJEAMI_OFFSET UNITYSDK_OFFSET(0xF159F40)
#define NPKFNDLMOKD_BMOPJJOJMID_OFFSET UNITYSDK_OFFSET(0xF15A220)
#define NPKFNDLMOKD_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0xF159E20)
#define NPKFNDLMOKD_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0xF159D30)
#define NPKFNDLMOKD_FKNNMIPMBGH_OFFSET UNITYSDK_OFFSET(0xF15AB00)
#define NPKFNDLMOKD_KFJKNGHLGLM_OFFSET UNITYSDK_OFFSET(0xF15A490)
#define NPKFNDLMOKD_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0xF15AD40)
#define NPKFNDLMOKD__CCTOR_OFFSET UNITYSDK_OFFSET(0xF159D20)

inline static constexpr unsigned int NPKFNDLMOKD_TypeDefinitionIndex = 68747;

class NPKFNDLMOKD : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigWindFieldProperty*>** StaticGet_NIEEJCLJBFK()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigWindFieldProperty*>**)Il2CppClass::FromTypeDefinitionIndex(NPKFNDLMOKD_TypeDefinitionIndex)->GetStaticField(0x47730);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPKFNDLMOKD__CCTOR_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + NPKFNDLMOKD_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + NPKFNDLMOKD_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::MoleMole::Config::ConfigWindFieldProperty* BMOPJJOJMID(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::Config::ConfigWindFieldProperty*(*)(::System::String*))((::PBYTE)hIl2Cpp + NPKFNDLMOKD_BMOPJJOJMID_OFFSET))(MCOHLHMKLIP);
	}

	static ::System::Void APEKLPJEAMI(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + NPKFNDLMOKD_APEKLPJEAMI_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void KFJKNGHLGLM(::System::Collections::Generic::List_1<::MoleMole::Config::WindFieldConfig*>* EJEABGDBPAM)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Config::WindFieldConfig*>*))((::PBYTE)hIl2Cpp + NPKFNDLMOKD_KFJKNGHLGLM_OFFSET))(EJEABGDBPAM);
	}

	static ::System::Boolean FKNNMIPMBGH(::System::String* OLJDIMJJJAK)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + NPKFNDLMOKD_FKNNMIPMBGH_OFFSET))(OLJDIMJJJAK);
	}

	static ::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPKFNDLMOKD_NPOLNFDBOOD_OFFSET))();
	}
};
