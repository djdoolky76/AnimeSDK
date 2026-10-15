#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FFCGHKGDAJF;
class GLDDJECCBAO;
class NHLGPCOOCMA;

#define GLDDJECCBAO_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0x15AA32C0)
#define GLDDJECCBAO_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15AA3110)
#define GLDDJECCBAO_CTOR_OFFSET UNITYSDK_OFFSET(0x15AA3230)
#define GLDDJECCBAO_DIPFOIAKDDM_OFFSET UNITYSDK_OFFSET(0x15AA2F20)
#define GLDDJECCBAO_GET_EDGEID_OFFSET UNITYSDK_OFFSET(0x15AA2EE0)
#define GLDDJECCBAO_GET_FROMID_OFFSET UNITYSDK_OFFSET(0x15AA2EF0)
#define GLDDJECCBAO_GET_GRAPH_OFFSET UNITYSDK_OFFSET(0x15AA2ED0)
#define GLDDJECCBAO_GET_TOID_OFFSET UNITYSDK_OFFSET(0x15AA2F00)
#define GLDDJECCBAO_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0x15AA2F10)
#define GLDDJECCBAO_IFHHFINIMCB_OFFSET UNITYSDK_OFFSET(0x15AA3040)
#define GLDDJECCBAO_JKMAPLMJGPL_OFFSET UNITYSDK_OFFSET(0x15AA31E0)

inline static constexpr unsigned int GLDDJECCBAO_TypeDefinitionIndex = 74611;

	class GLDDJECCBAO : public ::System::Object
	{
	public:
		::NHLGPCOOCMA* EHLNMPEMHOP; // 0x10
		::FFCGHKGDAJF* _Graph_k__BackingField; // 0x18
		::System::UInt32 _ToID_k__BackingField; // 0x20
		::System::UInt32 _EdgeID_k__BackingField; // 0x24
		::System::Single _Weight_k__BackingField; // 0x28
		::System::UInt32 _FromID_k__BackingField; // 0x2C
		::System::Void _ctor(::FFCGHKGDAJF* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::FFCGHKGDAJF*, ::System::UInt32, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + GLDDJECCBAO_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::FFCGHKGDAJF* get_Graph()
		{
			return ((::FFCGHKGDAJF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLDDJECCBAO_GET_GRAPH_OFFSET))(this);
		}

		::System::UInt32 get_EdgeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLDDJECCBAO_GET_EDGEID_OFFSET))(this);
		}

		::System::UInt32 get_FromID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLDDJECCBAO_GET_FROMID_OFFSET))(this);
		}

		::System::UInt32 get_ToID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLDDJECCBAO_GET_TOID_OFFSET))(this);
		}

		::System::Single get_Weight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GLDDJECCBAO_GET_WEIGHT_OFFSET))(this);
		}

		::System::Boolean DIPFOIAKDDM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GLDDJECCBAO_DIPFOIAKDDM_OFFSET))(this);
		}

		static ::GLDDJECCBAO* IFHHFINIMCB(::FFCGHKGDAJF* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Single a4, ::NHLGPCOOCMA* a5)
		{
			return ((::GLDDJECCBAO*(*)(::FFCGHKGDAJF*, ::System::UInt32, ::System::UInt32, ::System::Single, ::NHLGPCOOCMA*))((::PBYTE)hIl2Cpp + GLDDJECCBAO_IFHHFINIMCB_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::GLDDJECCBAO* BPLPBPMEODA(::FFCGHKGDAJF* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Single a4)
		{
			return ((::GLDDJECCBAO*(*)(::FFCGHKGDAJF*, ::System::UInt32, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + GLDDJECCBAO_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void JKMAPLMJGPL(::NHLGPCOOCMA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NHLGPCOOCMA*))((::PBYTE)hIl2Cpp + GLDDJECCBAO_JKMAPLMJGPL_OFFSET))(this, a1);
		}

		::System::Void BJMNKLGEMPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLDDJECCBAO_BJMNKLGEMPM_OFFSET))(this);
		}

	};
