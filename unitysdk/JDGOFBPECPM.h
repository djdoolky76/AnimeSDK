#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HMEKPIAPOND;
namespace RPG { template <typename T> class PoolHashSet_1; }
namespace UnityEngine { class Transform; }

#define JDGOFBPECPM_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DD56420)
#define JDGOFBPECPM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD564D0)
#define JDGOFBPECPM_LJAPEFGODCD_OFFSET UNITYSDK_OFFSET(0x1DD562A0)

inline static constexpr unsigned int JDGOFBPECPM_TypeDefinitionIndex = 44331;

	class JDGOFBPECPM : public ::System::Object
	{
	public:
		::UnityEngine::Transform* DICDJJOJKGF; // 0x10
		::RPG::PoolHashSet_1<::System::Int32>* FFEAHPNNDGO; // 0x18
		::HMEKPIAPOND* OLMBFAMHDON; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDGOFBPECPM_CTOR_OFFSET))(this);
		}

		::System::Void LJAPEFGODCD(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + JDGOFBPECPM_LJAPEFGODCD_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDGOFBPECPM_CLEAR_OFFSET))(this);
		}

	};
