#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DLLNHNMMJOM_BEOOJJJAOGN_CTOR_OFFSET UNITYSDK_OFFSET(0x1867B940)
#define DLLNHNMMJOM_BEOOJJJAOGN_GET_DESIGNLEVEL_OFFSET UNITYSDK_OFFSET(0x1867B8E0)
#define DLLNHNMMJOM_BEOOJJJAOGN_GET_ENDPROGRESS_OFFSET UNITYSDK_OFFSET(0x1867B920)
#define DLLNHNMMJOM_BEOOJJJAOGN_GET_STARTPROGRESS_OFFSET UNITYSDK_OFFSET(0x1867B900)
#define DLLNHNMMJOM_BEOOJJJAOGN_SET_DESIGNLEVEL_OFFSET UNITYSDK_OFFSET(0x1867B8F0)
#define DLLNHNMMJOM_BEOOJJJAOGN_SET_ENDPROGRESS_OFFSET UNITYSDK_OFFSET(0x1867B930)
#define DLLNHNMMJOM_BEOOJJJAOGN_SET_STARTPROGRESS_OFFSET UNITYSDK_OFFSET(0x1867B910)

inline static constexpr unsigned int DLLNHNMMJOM_BEOOJJJAOGN_TypeDefinitionIndex = 82490;

	class DLLNHNMMJOM_BEOOJJJAOGN : public ::System::Object
	{
	public:
		::System::UInt32 _DesignLevel_k__BackingField; // 0x10
		::System::Single _EndProgress_k__BackingField; // 0x14
		::System::Single _StartProgress_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLNHNMMJOM_BEOOJJJAOGN_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_DesignLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLNHNMMJOM_BEOOJJJAOGN_GET_DESIGNLEVEL_OFFSET))(this);
		}

		::System::Void set_DesignLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DLLNHNMMJOM_BEOOJJJAOGN_SET_DESIGNLEVEL_OFFSET))(this, a1);
		}

		::System::Single get_StartProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLNHNMMJOM_BEOOJJJAOGN_GET_STARTPROGRESS_OFFSET))(this);
		}

		::System::Void set_StartProgress(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DLLNHNMMJOM_BEOOJJJAOGN_SET_STARTPROGRESS_OFFSET))(this, a1);
		}

		::System::Single get_EndProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLNHNMMJOM_BEOOJJJAOGN_GET_ENDPROGRESS_OFFSET))(this);
		}

		::System::Void set_EndProgress(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DLLNHNMMJOM_BEOOJJJAOGN_SET_ENDPROGRESS_OFFSET))(this, a1);
		}

	};
