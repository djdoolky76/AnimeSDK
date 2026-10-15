#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACNNPBJEOFJ;
class FKIAHEEJGKH;
class HDLCAPDIKJI;
class HMFFHLKHOMJ;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Linq { template <typename T1, typename T2> class IGrouping_2; }

#define JEHEMLENCIE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x16618110)
#define JEHEMLENCIE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x16618150)
#define JEHEMLENCIE___C__ONGAMEFINISHED_B__14_0_OFFSET UNITYSDK_OFFSET(0x16618160)
#define JEHEMLENCIE___C__ONGAMEFINISHED_B__14_1_OFFSET UNITYSDK_OFFSET(0x16618180)
#define JEHEMLENCIE___C__ONGAMEFINISHED_B__14_2_OFFSET UNITYSDK_OFFSET(0x166181A0)
#define JEHEMLENCIE___C__ONGAMEFINISHED_B__14_3_OFFSET UNITYSDK_OFFSET(0x16618440)
#define JEHEMLENCIE___C__ONGAMEFINISHED_B__14_4_OFFSET UNITYSDK_OFFSET(0x16618420)

inline static constexpr unsigned int JEHEMLENCIE___c_TypeDefinitionIndex = 79042;

	class JEHEMLENCIE___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::FKIAHEEJGKH*, ::System::Int64>** StaticGet___9__14_0()
		{
			return (::System::Func_2<::FKIAHEEJGKH*, ::System::Int64>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2C20);
		}

		static ::System::Action_1<::HMFFHLKHOMJ*>** StaticGet___9__14_3()
		{
			return (::System::Action_1<::HMFFHLKHOMJ*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2C28);
		}

		static ::System::Func_2<::ACNNPBJEOFJ*, ::System::Int32>** StaticGet___9__14_4()
		{
			return (::System::Func_2<::ACNNPBJEOFJ*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2C30);
		}

		static ::System::Func_2<::ACNNPBJEOFJ*, ::System::UInt32>** StaticGet___9__14_1()
		{
			return (::System::Func_2<::ACNNPBJEOFJ*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2C38);
		}

		static ::System::Func_2<::System::Linq::IGrouping_2<::System::UInt32, ::ACNNPBJEOFJ*>*, ::HDLCAPDIKJI*>** StaticGet___9__14_2()
		{
			return (::System::Func_2<::System::Linq::IGrouping_2<::System::UInt32, ::ACNNPBJEOFJ*>*, ::HDLCAPDIKJI*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2C40);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2C48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEHEMLENCIE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHEMLENCIE___C_CTOR_OFFSET))(this);
		}

		::System::Int64 _OnGameFinished_b__14_0(::FKIAHEEJGKH* a1)
		{
			return ((::System::Int64(*)(::PVOID, ::FKIAHEEJGKH*))((::PBYTE)hIl2Cpp + JEHEMLENCIE___C__ONGAMEFINISHED_B__14_0_OFFSET))(this, a1);
		}

		::System::UInt32 _OnGameFinished_b__14_1(::ACNNPBJEOFJ* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::ACNNPBJEOFJ*))((::PBYTE)hIl2Cpp + JEHEMLENCIE___C__ONGAMEFINISHED_B__14_1_OFFSET))(this, a1);
		}

		::HDLCAPDIKJI* _OnGameFinished_b__14_2(::System::Linq::IGrouping_2<::System::UInt32, ::ACNNPBJEOFJ*>* a1)
		{
			return ((::HDLCAPDIKJI*(*)(::PVOID, ::System::Linq::IGrouping_2<::System::UInt32, ::ACNNPBJEOFJ*>*))((::PBYTE)hIl2Cpp + JEHEMLENCIE___C__ONGAMEFINISHED_B__14_2_OFFSET))(this, a1);
		}

		::System::Int32 _OnGameFinished_b__14_4(::ACNNPBJEOFJ* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::ACNNPBJEOFJ*))((::PBYTE)hIl2Cpp + JEHEMLENCIE___C__ONGAMEFINISHED_B__14_4_OFFSET))(this, a1);
		}

		::System::Void _OnGameFinished_b__14_3(::HMFFHLKHOMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HMFFHLKHOMJ*))((::PBYTE)hIl2Cpp + JEHEMLENCIE___C__ONGAMEFINISHED_B__14_3_OFFSET))(this, a1);
		}

	};
