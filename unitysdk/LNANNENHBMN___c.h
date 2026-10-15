#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class FHJKNCMMMON;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define LNANNENHBMN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB7D5AA0)
#define LNANNENHBMN___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB7D5AE0)
#define LNANNENHBMN___C__GET_BANNEDCELLRELATIVEPOSITIONS_B__13_0_OFFSET UNITYSDK_OFFSET(0xB7D5AF0)

	class LNANNENHBMN___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::FHJKNCMMMON*, ::UnityEngine::Vector2Int>** StaticGet___9__13_0()
		{
			return (::System::Func_2<::FHJKNCMMMON*, ::UnityEngine::Vector2Int>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6C540);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6C548);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNANNENHBMN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNANNENHBMN___C_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2Int _get_BannedCellRelativePositions_b__13_0(::FHJKNCMMMON* a1)
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID, ::FHJKNCMMMON*))((::PBYTE)hIl2Cpp + LNANNENHBMN___C__GET_BANNEDCELLRELATIVEPOSITIONS_B__13_0_OFFSET))(this, a1);
		}

	};
