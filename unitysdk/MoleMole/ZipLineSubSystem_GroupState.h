#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"
#include "unitysdk/MNAGAGOHIGH.h"

namespace MoleMole { class ZipLineSubSystem_MainState; }
template <typename T> class JIOLFCAGOFH_1;
template <typename T> class LJHFMILANJA_1;

#define MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE_GET_BLOCKGROUPSTREAMING_FINAL_OFFSET UNITYSDK_OFFSET(0xE546390)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE_GET_BLOCKGROUPSTREAMING_SPLINE_OFFSET UNITYSDK_OFFSET(0xE546350)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE_GET_BLOCKINGGROUPSTREAMING_OFFSET UNITYSDK_OFFSET(0xE546330)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE_GET_RESUMEGROUPSTREAMING_OFFSET UNITYSDK_OFFSET(0xE546370)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xE5463B0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE_SET_BLOCKGROUPSTREAMING_FINAL_OFFSET UNITYSDK_OFFSET(0xE5463A0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE_SET_BLOCKGROUPSTREAMING_SPLINE_OFFSET UNITYSDK_OFFSET(0xE546360)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE_SET_BLOCKINGGROUPSTREAMING_OFFSET UNITYSDK_OFFSET(0xE546340)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE_SET_RESUMEGROUPSTREAMING_OFFSET UNITYSDK_OFFSET(0xE546380)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xE546170)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE__ONCREATEPROPERTY_B__18_0_OFFSET UNITYSDK_OFFSET(0xE546550)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE__ONCREATEPROPERTY_B__18_1_OFFSET UNITYSDK_OFFSET(0xE546760)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE__ONCREATEPROPERTY_B__18_2_OFFSET UNITYSDK_OFFSET(0xE546920)

namespace MoleMole
{
	inline static constexpr unsigned int ZipLineSubSystem_GroupState_TypeDefinitionIndex = 92012;

	class ZipLineSubSystem_GroupState : public ::JJEJBPGJPJN
	{
	public:
		::JIOLFCAGOFH_1<::System::Boolean>* _BlockGroupStreaming_Final_k__BackingField; // 0x88
		::LJHFMILANJA_1<::System::Boolean>* _BlockingGroupStreaming_k__BackingField; // 0x90
		::MoleMole::ZipLineSubSystem_MainState* _mainState; // 0x98
		::JIOLFCAGOFH_1<::System::Boolean>* _BlockGroupStreaming_Spline_k__BackingField; // 0xA0
		::LJHFMILANJA_1<::System::Boolean>* _ResumeGroupStreaming_k__BackingField; // 0xA8

		::System::Void _ctor(::MoleMole::ZipLineSubSystem_MainState* mainState)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ZipLineSubSystem_MainState*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE__CTOR_OFFSET))(this, mainState);
		}

		::LJHFMILANJA_1<::System::Boolean>* get_BlockingGroupStreaming()
		{
			return ((::LJHFMILANJA_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE_GET_BLOCKINGGROUPSTREAMING_OFFSET))(this);
		}

		::System::Void set_BlockingGroupStreaming(::LJHFMILANJA_1<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::LJHFMILANJA_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE_SET_BLOCKINGGROUPSTREAMING_OFFSET))(this, value);
		}

		::JIOLFCAGOFH_1<::System::Boolean>* get_BlockGroupStreaming_Spline()
		{
			return ((::JIOLFCAGOFH_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE_GET_BLOCKGROUPSTREAMING_SPLINE_OFFSET))(this);
		}

		::System::Void set_BlockGroupStreaming_Spline(::JIOLFCAGOFH_1<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::JIOLFCAGOFH_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE_SET_BLOCKGROUPSTREAMING_SPLINE_OFFSET))(this, value);
		}

		::LJHFMILANJA_1<::System::Boolean>* get_ResumeGroupStreaming()
		{
			return ((::LJHFMILANJA_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE_GET_RESUMEGROUPSTREAMING_OFFSET))(this);
		}

		::System::Void set_ResumeGroupStreaming(::LJHFMILANJA_1<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::LJHFMILANJA_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE_SET_RESUMEGROUPSTREAMING_OFFSET))(this, value);
		}

		::JIOLFCAGOFH_1<::System::Boolean>* get_BlockGroupStreaming_Final()
		{
			return ((::JIOLFCAGOFH_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE_GET_BLOCKGROUPSTREAMING_FINAL_OFFSET))(this);
		}

		::System::Void set_BlockGroupStreaming_Final(::JIOLFCAGOFH_1<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::JIOLFCAGOFH_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE_SET_BLOCKGROUPSTREAMING_FINAL_OFFSET))(this, value);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE_ONCREATEPROPERTY_OFFSET))(this);
		}

		::System::Boolean _OnCreateProperty_b__18_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE__ONCREATEPROPERTY_B__18_0_OFFSET))(this);
		}

		::System::Boolean _OnCreateProperty_b__18_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE__ONCREATEPROPERTY_B__18_1_OFFSET))(this);
		}

		::System::Void _OnCreateProperty_b__18_2(::MNAGAGOHIGH& _)
		{
			return ((::System::Void(*)(::PVOID, ::MNAGAGOHIGH&))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GROUPSTATE__ONCREATEPROPERTY_B__18_2_OFFSET))(this, _);
		}
	};
}
