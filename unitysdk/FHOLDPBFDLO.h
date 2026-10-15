#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PedestrianNode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FHOLDPBFDLO_CTOR_OFFSET UNITYSDK_OFFSET(0x15793830)

inline static constexpr unsigned int FHOLDPBFDLO_TypeDefinitionIndex = 69227;

	class FHOLDPBFDLO : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* OFIMPDDGIOE; // 0x10
		::System::String* AKKHHEJMELA; // 0x18
		::RPG::GameCore::PedestrianNode EOJENDKOHOF; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHOLDPBFDLO_CTOR_OFFSET))(this);
		}

	};
