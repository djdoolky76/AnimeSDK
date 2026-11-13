#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
class JLGAPJLCIKO_CMFKGHHJAOB;
class JLGAPJLCIKO_JLALEFOPIOH;
namespace System { class Object; }

#define JLGAPJLCIKO_JLALEFOPIOH_CTOR_OFFSET UNITYSDK_OFFSET(0x17B4F480)
#define JLGAPJLCIKO_JLALEFOPIOH_EQUALS_OFFSET UNITYSDK_OFFSET(0x17B50820)
#define JLGAPJLCIKO_JLALEFOPIOH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17B50930)

inline static constexpr unsigned int JLGAPJLCIKO_JLALEFOPIOH_TypeDefinitionIndex = 72661;

	class JLGAPJLCIKO_JLALEFOPIOH : public ::System::Object
	{
	public:
		::JLGAPJLCIKO_JLALEFOPIOH* FGEIIMDCHPF; // 0x10
		::JLGAPJLCIKO_CMFKGHHJAOB* KMMCOHGOHOB; // 0x18
		::JLGAPJLCIKO_JLALEFOPIOH* PBJELCENFHF; // 0x20
		::System::Int32 DLGIKPLGHGL; // 0x28
		::UnityEngine::Vector3 NGEHNIIOACO; // 0x2C
		::UnityEngine::Vector3 NPHAFNPMMDF; // 0x38
		::UnityEngine::Vector3 CDLEHPFGKHC; // 0x44
		::UnityEngine::Vector2 HMAGPLNGNMP; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLGAPJLCIKO_JLALEFOPIOH_CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JLGAPJLCIKO_JLALEFOPIOH_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLGAPJLCIKO_JLALEFOPIOH_GETHASHCODE_OFFSET))(this);
		}

	};
