#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EIBJGIEGOML;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define LMLLMDCKLBI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E315250)
#define LMLLMDCKLBI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E315280)
#define LMLLMDCKLBI___C___BUILDEXRANKROWSBYAVATARID_B__19_0_OFFSET UNITYSDK_OFFSET(0x1E315290)

inline static constexpr unsigned int LMLLMDCKLBI___c_TypeDefinitionIndex = 12825;

	class LMLLMDCKLBI___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::EIBJGIEGOML*>** StaticGet___9__19_0()
		{
			return (::System::Comparison_1<::EIBJGIEGOML*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x363E0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x363E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMLLMDCKLBI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMLLMDCKLBI___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __BuildExRankRowsByAvatarId_b__19_0(::EIBJGIEGOML* a1, ::EIBJGIEGOML* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::EIBJGIEGOML*, ::EIBJGIEGOML*))((::PBYTE)hIl2Cpp + LMLLMDCKLBI___C___BUILDEXRANKROWSBYAVATARID_B__19_0_OFFSET))(this, a1, a2);
		}

	};
