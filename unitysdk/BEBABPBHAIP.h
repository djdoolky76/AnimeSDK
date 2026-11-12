#pragma once
#include "unitysdk/unitysdk.h"
class CJOJBCLIPEC;
class NGFHCJIAOLH;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define BEBABPBHAIP_CTOR_OFFSET UNITYSDK_OFFSET(0xB7C1000)
#define BEBABPBHAIP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB7C1470)
#define BEBABPBHAIP_JKMLDLJBCPP_OFFSET UNITYSDK_OFFSET(0xB7C1340)
#define BEBABPBHAIP_LILEODEAOJO_OFFSET UNITYSDK_OFFSET(0xB7C10E0)
#define BEBABPBHAIP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB7C1130)
#define BEBABPBHAIP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB7C1420)

inline static constexpr unsigned int BEBABPBHAIP_TypeDefinitionIndex = 53765;

	class BEBABPBHAIP
	{
	public:
		::NGFHCJIAOLH* CKCHKBCBNIJ; // 0x28
		::System::Int32 MLNDMKIDBGL; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::CJOJBCLIPEC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::CJOJBCLIPEC*))((::PBYTE)hIl2Cpp + BEBABPBHAIP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void LILEODEAOJO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BEBABPBHAIP_LILEODEAOJO_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEBABPBHAIP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEBABPBHAIP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEBABPBHAIP_DISPOSE_OFFSET))(this);
		}

		::System::Void JKMLDLJBCPP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEBABPBHAIP_JKMLDLJBCPP_OFFSET))(this);
		}

	};
