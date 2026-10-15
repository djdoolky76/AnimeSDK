#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FKKIAHNJCBC;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define DBHGOLFACFL_KHDEKEEMOCE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDFD80D0)
#define DBHGOLFACFL_KHDEKEEMOCE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDFD8110)
#define DBHGOLFACFL_KHDEKEEMOCE___C__CREATE_B__3_1_OFFSET UNITYSDK_OFFSET(0xDFD8120)
#define DBHGOLFACFL_KHDEKEEMOCE___C__CREATE_B__3_2_OFFSET UNITYSDK_OFFSET(0xDFD8140)

inline static constexpr unsigned int DBHGOLFACFL_KHDEKEEMOCE___c_TypeDefinitionIndex = 79435;

	class DBHGOLFACFL_KHDEKEEMOCE___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::FKKIAHNJCBC*, ::System::UInt32>** StaticGet___9__3_2()
		{
			return (::System::Func_2<::FKKIAHNJCBC*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59280);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59288);
		}

		static ::System::Func_2<::FKKIAHNJCBC*, ::System::Boolean>** StaticGet___9__3_1()
		{
			return (::System::Func_2<::FKKIAHNJCBC*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59290);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBHGOLFACFL_KHDEKEEMOCE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBHGOLFACFL_KHDEKEEMOCE___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _Create_b__3_1(::FKKIAHNJCBC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKKIAHNJCBC*))((::PBYTE)hIl2Cpp + DBHGOLFACFL_KHDEKEEMOCE___C__CREATE_B__3_1_OFFSET))(this, a1);
		}

		::System::UInt32 _Create_b__3_2(::FKKIAHNJCBC* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::FKKIAHNJCBC*))((::PBYTE)hIl2Cpp + DBHGOLFACFL_KHDEKEEMOCE___C__CREATE_B__3_2_OFFSET))(this, a1);
		}

	};
