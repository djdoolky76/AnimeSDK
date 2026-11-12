#pragma once
#include "unitysdk/unitysdk.h"
class NJACMDCJMBH;
namespace RPG::GameCore { class TaskContext; }

#define AFPCAOHNFFE_CTOR_OFFSET UNITYSDK_OFFSET(0xD5D4730)
#define AFPCAOHNFFE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD5D4760)

inline static constexpr unsigned int AFPCAOHNFFE_TypeDefinitionIndex = 54023;

	class AFPCAOHNFFE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NJACMDCJMBH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NJACMDCJMBH*))((::PBYTE)hIl2Cpp + AFPCAOHNFFE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPCAOHNFFE_ONTASKBEGIN_OFFSET))(this);
		}

	};
