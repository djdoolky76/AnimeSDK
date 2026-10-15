#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HMEKPIAPOND;
namespace RPG { template <typename T> class PoolHashSet_1; }
namespace UnityEngine { class Transform; }

#define JDGOFBPECPM_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CB8FE30)
#define JDGOFBPECPM_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB8FEE0)
#define JDGOFBPECPM_LJAPEFGODCD_OFFSET UNITYSDK_OFFSET(0x1CB8FCB0)

	class JDGOFBPECPM : public ::System::Object
	{
	public:
		::HMEKPIAPOND* OLMBFAMHDON; // 0x10
		::UnityEngine::Transform* DICDJJOJKGF; // 0x18
		::RPG::PoolHashSet_1<::System::Int32>* FFEAHPNNDGO; // 0x20
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
