#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LFCKLPMBGGI;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define OIDMIGBONBL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4A1320)
#define OIDMIGBONBL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4A1360)
#define OIDMIGBONBL___C__LOAD_B__4_0_OFFSET UNITYSDK_OFFSET(0x1C4A1370)

inline static constexpr unsigned int OIDMIGBONBL___c_TypeDefinitionIndex = 41533;

	class OIDMIGBONBL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1DBD0);
		}

		static ::System::Comparison_1<::LFCKLPMBGGI*>** StaticGet___9__4_0()
		{
			return (::System::Comparison_1<::LFCKLPMBGGI*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1DBD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIDMIGBONBL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIDMIGBONBL___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _Load_b__4_0(::LFCKLPMBGGI* a1, ::LFCKLPMBGGI* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::LFCKLPMBGGI*, ::LFCKLPMBGGI*))((::PBYTE)hIl2Cpp + OIDMIGBONBL___C__LOAD_B__4_0_OFFSET))(this, a1, a2);
		}

	};
