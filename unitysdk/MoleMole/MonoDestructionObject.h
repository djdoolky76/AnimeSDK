#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoDestructionObject_OMCBIOMEMJK.h"
#include "unitysdk/MoleMole/MonoSceneObjectBase.h"

class CALIGLPABNP;
class KHOCACCCFLJ;

#define MOLEMOLE_MONODESTRUCTIONOBJECT_GETBASETEMPLATE_OFFSET UNITYSDK_OFFSET(0x162DB380)
#define MOLEMOLE_MONODESTRUCTIONOBJECT_GETSUBID_OFFSET UNITYSDK_OFFSET(0x162DB1B0)
#define MOLEMOLE_MONODESTRUCTIONOBJECT_GETSUBTEMPLATE_OFFSET UNITYSDK_OFFSET(0x162DB310)
#define MOLEMOLE_MONODESTRUCTIONOBJECT_IOLJCFHBKGL_OFFSET UNITYSDK_OFFSET(0x162DB280)
#define MOLEMOLE_MONODESTRUCTIONOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x162DB3F0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoDestructionObject_TypeDefinitionIndex = 73424;

	class MonoDestructionObject : public ::MoleMole::MonoSceneObjectBase
	{
	public:
		::System::Int32 _templateID; // 0x38
		::MoleMole::MonoDestructionObject_OMCBIOMEMJK _idType; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODESTRUCTIONOBJECT__CTOR_OFFSET))(this);
		}

		::System::Int32 GetSubID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODESTRUCTIONOBJECT_GETSUBID_OFFSET))(this);
		}

		::KHOCACCCFLJ* GetSubTemplate()
		{
			return ((::KHOCACCCFLJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODESTRUCTIONOBJECT_GETSUBTEMPLATE_OFFSET))(this);
		}

		::CALIGLPABNP* GetBaseTemplate()
		{
			return ((::CALIGLPABNP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODESTRUCTIONOBJECT_GETBASETEMPLATE_OFFSET))(this);
		}

		static ::System::Int32 IOLJCFHBKGL(::System::Int32 FHPNAJCGNFN)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODESTRUCTIONOBJECT_IOLJCFHBKGL_OFFSET))(FHPNAJCGNFN);
		}
	};
}
