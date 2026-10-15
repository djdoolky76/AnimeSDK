#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KKGMHJNMOID;
class NKIJFPHFJCO;
class POIONNNNCMJ;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CCEIJBFAOAI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C5496B0)
#define CCEIJBFAOAI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5496F0)
#define CCEIJBFAOAI___C__DESTROYALLCHIPPIECES_B__41_0_OFFSET UNITYSDK_OFFSET(0x1C549750)
#define CCEIJBFAOAI___C__INITPROGRESS_B__35_0_OFFSET UNITYSDK_OFFSET(0x1C549700)
#define CCEIJBFAOAI___C__INITPROGRESS_B__35_1_OFFSET UNITYSDK_OFFSET(0x1C549730)

inline static constexpr unsigned int CCEIJBFAOAI___c_TypeDefinitionIndex = 41791;

	class CCEIJBFAOAI___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::POIONNNNCMJ*, ::KKGMHJNMOID*>** StaticGet___9__35_1()
		{
			return (::System::Func_2<::POIONNNNCMJ*, ::KKGMHJNMOID*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16950);
		}

		static ::System::Func_2<::NKIJFPHFJCO*, ::System::Boolean>** StaticGet___9__41_0()
		{
			return (::System::Func_2<::NKIJFPHFJCO*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16958);
		}

		static ::System::Func_2<::POIONNNNCMJ*, ::System::Boolean>** StaticGet___9__35_0()
		{
			return (::System::Func_2<::POIONNNNCMJ*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16960);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16968);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCEIJBFAOAI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCEIJBFAOAI___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _InitProgress_b__35_0(::POIONNNNCMJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::POIONNNNCMJ*))((::PBYTE)hIl2Cpp + CCEIJBFAOAI___C__INITPROGRESS_B__35_0_OFFSET))(this, a1);
		}

		::KKGMHJNMOID* _InitProgress_b__35_1(::POIONNNNCMJ* a1)
		{
			return ((::KKGMHJNMOID*(*)(::PVOID, ::POIONNNNCMJ*))((::PBYTE)hIl2Cpp + CCEIJBFAOAI___C__INITPROGRESS_B__35_1_OFFSET))(this, a1);
		}

		::System::Boolean _DestroyAllChipPieces_b__41_0(::NKIJFPHFJCO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + CCEIJBFAOAI___C__DESTROYALLCHIPPIECES_B__41_0_OFFSET))(this, a1);
		}

	};
