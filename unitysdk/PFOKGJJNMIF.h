#pragma once
#include "unitysdk/unitysdk.h"
class OKAAFHBNPLP;
namespace RPG::GameCore { class TaskContext; }

#define PFOKGJJNMIF_CTOR_OFFSET UNITYSDK_OFFSET(0xCAFB8C0)
#define PFOKGJJNMIF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCAFB8F0)

inline static constexpr unsigned int PFOKGJJNMIF_TypeDefinitionIndex = 59761;

	class PFOKGJJNMIF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::OKAAFHBNPLP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::OKAAFHBNPLP*))((::PBYTE)hIl2Cpp + PFOKGJJNMIF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFOKGJJNMIF_ONTASKBEGIN_OFFSET))(this);
		}

	};
