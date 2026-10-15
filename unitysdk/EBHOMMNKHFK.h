#pragma once
#include "unitysdk/unitysdk.h"
class GMBNLONCNAF;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TextJoinConfigRow; }
namespace System { class String; }

#define EBHOMMNKHFK_CTOR_OFFSET UNITYSDK_OFFSET(0x12CF3F30)
#define EBHOMMNKHFK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12CF3F60)
#define EBHOMMNKHFK_PIDNBEOPJGJ_OFFSET UNITYSDK_OFFSET(0x12CF40F0)

inline static constexpr unsigned int EBHOMMNKHFK_TypeDefinitionIndex = 58253;

	class EBHOMMNKHFK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GMBNLONCNAF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GMBNLONCNAF*))((::PBYTE)hIl2Cpp + EBHOMMNKHFK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBHOMMNKHFK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void PIDNBEOPJGJ(::RPG::GameCore::TextJoinConfigRow* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TextJoinConfigRow*, ::System::String*))((::PBYTE)hIl2Cpp + EBHOMMNKHFK_PIDNBEOPJGJ_OFFSET))(this, a1, a2);
		}

	};
