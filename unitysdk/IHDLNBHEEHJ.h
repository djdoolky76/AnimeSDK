#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/JEDLNCLNLEE.h"
namespace RPG::GameCore { class DriftComponentData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Transform; }

#define IHDLNBHEEHJ_BALMBDPCAKI_OFFSET UNITYSDK_OFFSET(0x173CE580)
#define IHDLNBHEEHJ_KDJANOAPAFO_OFFSET UNITYSDK_OFFSET(0x173CE750)
#define IHDLNBHEEHJ_KHJHHICLMLP_OFFSET UNITYSDK_OFFSET(0x173CDD80)
#define IHDLNBHEEHJ_LONELABGIKF_OFFSET UNITYSDK_OFFSET(0x173CDE00)
#define IHDLNBHEEHJ_NJFJPEFAFCK_OFFSET UNITYSDK_OFFSET(0x173CE2A0)

inline static constexpr unsigned int IHDLNBHEEHJ_TypeDefinitionIndex = 76014;

	class IHDLNBHEEHJ : public ::System::Object
	{
	public:
		static ::System::Boolean KHJHHICLMLP(::JEDLNCLNLEE a1)
		{
			return ((::System::Boolean(*)(::JEDLNCLNLEE))((::PBYTE)hIl2Cpp + IHDLNBHEEHJ_KHJHHICLMLP_OFFSET))(a1);
		}

		static ::System::Boolean LONELABGIKF(::JEDLNCLNLEE a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Boolean(*)(::JEDLNCLNLEE, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + IHDLNBHEEHJ_LONELABGIKF_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean NJFJPEFAFCK(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::RPG::GameCore::DriftComponentData* a3, ::System::Collections::Generic::HashSet_1<::UnityEngine::Transform*>* a4, ::System::String* a5)
		{
			return ((::System::Boolean(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::RPG::GameCore::DriftComponentData*, ::System::Collections::Generic::HashSet_1<::UnityEngine::Transform*>*, ::System::String*))((::PBYTE)hIl2Cpp + IHDLNBHEEHJ_NJFJPEFAFCK_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean BALMBDPCAKI(::RPG::GameCore::DriftComponentData* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::String* a4)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::DriftComponentData*, ::System::Boolean, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + IHDLNBHEEHJ_BALMBDPCAKI_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::String* KDJANOAPAFO(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::String*(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + IHDLNBHEEHJ_KDJANOAPAFO_OFFSET))(a1, a2);
		}

	};
