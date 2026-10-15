#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DCKGNOHECDC;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define NNNIFLIIKMF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBCCEBF0)
#define NNNIFLIIKMF___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBCCEC30)
#define NNNIFLIIKMF___C___CREATEFORBOSS_B__3_0_OFFSET UNITYSDK_OFFSET(0xBCCEE40)
#define NNNIFLIIKMF___C___CREATEFORMEMORY_B__1_0_OFFSET UNITYSDK_OFFSET(0xBCCEC40)
#define NNNIFLIIKMF___C___CREATEFORSTORY_B__2_0_OFFSET UNITYSDK_OFFSET(0xBCCED40)

inline static constexpr unsigned int NNNIFLIIKMF___c_TypeDefinitionIndex = 81467;

	class NNNIFLIIKMF___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::DCKGNOHECDC*, ::System::Int32>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::DCKGNOHECDC*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51DD0);
		}

		static ::System::Func_2<::DCKGNOHECDC*, ::System::Int32>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::DCKGNOHECDC*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51DD8);
		}

		static ::System::Func_2<::DCKGNOHECDC*, ::System::Int32>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::DCKGNOHECDC*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51DE0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51DE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNNIFLIIKMF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNNIFLIIKMF___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __CreateForMemory_b__1_0(::DCKGNOHECDC* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::DCKGNOHECDC*))((::PBYTE)hIl2Cpp + NNNIFLIIKMF___C___CREATEFORMEMORY_B__1_0_OFFSET))(this, a1);
		}

		::System::Int32 __CreateForStory_b__2_0(::DCKGNOHECDC* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::DCKGNOHECDC*))((::PBYTE)hIl2Cpp + NNNIFLIIKMF___C___CREATEFORSTORY_B__2_0_OFFSET))(this, a1);
		}

		::System::Int32 __CreateForBoss_b__3_0(::DCKGNOHECDC* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::DCKGNOHECDC*))((::PBYTE)hIl2Cpp + NNNIFLIIKMF___C___CREATEFORBOSS_B__3_0_OFFSET))(this, a1);
		}

	};
