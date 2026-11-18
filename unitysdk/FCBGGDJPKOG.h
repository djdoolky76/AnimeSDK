#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class HBIBNDIOKPG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define FCBGGDJPKOG_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x14284EE0)
#define FCBGGDJPKOG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x14285460)
#define FCBGGDJPKOG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14284FF0)
#define FCBGGDJPKOG_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x142857B0)
#define FCBGGDJPKOG_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x14284FE0)
#define FCBGGDJPKOG_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x142859F0)
#define FCBGGDJPKOG_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x142854C0)
#define FCBGGDJPKOG_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x14285960)
#define FCBGGDJPKOG_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x14284C40)
#define FCBGGDJPKOG_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x14284E50)
#define FCBGGDJPKOG_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x14285070)
#define FCBGGDJPKOG__CTOR_OFFSET UNITYSDK_OFFSET(0x14285720)

inline static constexpr unsigned int FCBGGDJPKOG_TypeDefinitionIndex = 53056;

class FCBGGDJPKOG : public ::HDJJJGCHLEE
{
public:
	::FOBNALGHPPD_1<::UnityEngine::Vector3> ILOJFPNKJII; // 0x30
	::System::Byte _padding0[0x18];
	::HBIBNDIOKPG* PBANCBCAMOI; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCBGGDJPKOG__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCBGGDJPKOG_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + FCBGGDJPKOG_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCBGGDJPKOG_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCBGGDJPKOG_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FCBGGDJPKOG_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FCBGGDJPKOG_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::FCBGGDJPKOG* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::FCBGGDJPKOG*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FCBGGDJPKOG_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + FCBGGDJPKOG_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCBGGDJPKOG_JFLMLBMNFFK_OFFSET))(this);
	}

	static ::FCBGGDJPKOG* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::FCBGGDJPKOG*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FCBGGDJPKOG_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FCBGGDJPKOG_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
