#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightFormationRole; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define BNNFEODFCLM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBDDE8F0)
#define BNNFEODFCLM___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBDDE930)
#define BNNFEODFCLM___C__SERIALIZE_B__1_0_OFFSET UNITYSDK_OFFSET(0xBDDE940)

inline static constexpr unsigned int BNNFEODFCLM___c_TypeDefinitionIndex = 64627;

	class BNNFEODFCLM___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightFormationRole*, ::System::UInt32>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightFormationRole*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6F7F0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6F7F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BNNFEODFCLM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNNFEODFCLM___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _Serialize_b__1_0(::RPG::Client::GridFightFormationRole* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightFormationRole*))((::PBYTE)hIl2Cpp + BNNFEODFCLM___C__SERIALIZE_B__1_0_OFFSET))(this, a1);
		}

	};
