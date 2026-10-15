#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BOGCBDLBHFK;
class FDPALAEIHPB;
class PEMFMPIPNJN;

#define GCCFHOMFHNA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA7BC30)
#define GCCFHOMFHNA_DAFPFKLJECN_OFFSET UNITYSDK_OFFSET(0x1CA7DA00)
#define GCCFHOMFHNA_DFKDHBAPHPB_OFFSET UNITYSDK_OFFSET(0x1CA7C150)
#define GCCFHOMFHNA_EFHOIFDFFBC_OFFSET UNITYSDK_OFFSET(0x1CA7E8E0)
#define GCCFHOMFHNA_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1CA7BC40)
#define GCCFHOMFHNA_FLMKJMEEAKL_OFFSET UNITYSDK_OFFSET(0x1CA7D000)
#define GCCFHOMFHNA_LPMOHNFEKAK_OFFSET UNITYSDK_OFFSET(0x1CA7D480)
#define GCCFHOMFHNA_MMDDFOJCLBC_OFFSET UNITYSDK_OFFSET(0x1CA7E500)
#define GCCFHOMFHNA_OBDOKODNMDA_OFFSET UNITYSDK_OFFSET(0x1CA7CD30)

inline static constexpr unsigned int GCCFHOMFHNA_TypeDefinitionIndex = 42484;

	class GCCFHOMFHNA : public ::System::Object
	{
	public:
		::PEMFMPIPNJN* PDENFEFCAGN; // 0x10
		::FDPALAEIHPB* FKINCGODJEP; // 0x18
		::System::Void _ctor(::FDPALAEIHPB* a1, ::PEMFMPIPNJN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::PEMFMPIPNJN*))((::PBYTE)hIl2Cpp + GCCFHOMFHNA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCCFHOMFHNA_EXECUTE_OFFSET))(this);
		}

		::System::Boolean FLMKJMEEAKL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GCCFHOMFHNA_FLMKJMEEAKL_OFFSET))(this);
		}

		::System::Boolean LPMOHNFEKAK(::BOGCBDLBHFK* a1, ::System::Boolean a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::BOGCBDLBHFK*, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + GCCFHOMFHNA_LPMOHNFEKAK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DAFPFKLJECN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCCFHOMFHNA_DAFPFKLJECN_OFFSET))(this);
		}

		::System::Void DFKDHBAPHPB(::BOGCBDLBHFK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOGCBDLBHFK*))((::PBYTE)hIl2Cpp + GCCFHOMFHNA_DFKDHBAPHPB_OFFSET))(this, a1);
		}

		::System::Boolean OBDOKODNMDA(::System::Boolean a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector3, ::System::Boolean, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GCCFHOMFHNA_OBDOKODNMDA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean MMDDFOJCLBC(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + GCCFHOMFHNA_MMDDFOJCLBC_OFFSET))(this, a1, a2);
		}

		::System::Single EFHOIFDFFBC(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GCCFHOMFHNA_EFHOIFDFFBC_OFFSET))(this, a1, a2, a3, a4);
		}

	};
