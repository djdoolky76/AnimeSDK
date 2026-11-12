#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define GEIFDGHFMMF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x16913060)
#define GEIFDGHFMMF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x169130A0)
#define GEIFDGHFMMF___C__GET_PROPERTYTYPES_B__3_0_OFFSET UNITYSDK_OFFSET(0x169130B0)

inline static constexpr unsigned int GEIFDGHFMMF___c_TypeDefinitionIndex = 66613;

	class GEIFDGHFMMF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x66DC0);
		}

		static ::System::Func_2<::System::UInt32, ::RPG::GameCore::AvatarPropertyType>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::GameCore::AvatarPropertyType>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x66DC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GEIFDGHFMMF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIFDGHFMMF___C_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AvatarPropertyType _get_PropertyTypes_b__3_0(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AvatarPropertyType(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GEIFDGHFMMF___C__GET_PROPERTYTYPES_B__3_0_OFFSET))(this, a1);
		}

	};
