#pragma once
#include "unitysdk/unitysdk.h"
class HJHAGNBDOPP;
namespace RPG::GameCore { class TaskContext; }

#define GMCCBAMJFEM_CTOR_OFFSET UNITYSDK_OFFSET(0x16C76E20)
#define GMCCBAMJFEM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16C76E50)

inline static constexpr unsigned int GMCCBAMJFEM_TypeDefinitionIndex = 59756;

	class GMCCBAMJFEM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::HJHAGNBDOPP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::HJHAGNBDOPP*))((::PBYTE)hIl2Cpp + GMCCBAMJFEM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMCCBAMJFEM_ONTASKBEGIN_OFFSET))(this);
		}

	};
