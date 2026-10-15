#pragma once
#include "unitysdk/unitysdk.h"
class MOFBPDIGHKJ;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define GCKNEMLNKNE_CTOR_OFFSET UNITYSDK_OFFSET(0x159776D0)
#define GCKNEMLNKNE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15977700)

inline static constexpr unsigned int GCKNEMLNKNE_TypeDefinitionIndex = 55424;

	class GCKNEMLNKNE
	{
	public:
		::Il2CppArray<::System::Object*>* NABPGAFIDJL; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MOFBPDIGHKJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MOFBPDIGHKJ*))((::PBYTE)hIl2Cpp + GCKNEMLNKNE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCKNEMLNKNE_ONTASKBEGIN_OFFSET))(this);
		}

	};
