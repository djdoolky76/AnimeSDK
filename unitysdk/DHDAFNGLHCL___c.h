#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DEHHODAHDMH;
class NONJMIHBLMK;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define DHDAFNGLHCL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xEBCBDE0)
#define DHDAFNGLHCL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xEBCBE10)
#define DHDAFNGLHCL___C__HANDLEPOSTPROCESS_B__0_0_OFFSET UNITYSDK_OFFSET(0xEBCBE20)
#define DHDAFNGLHCL___C__HANDLEPOSTPROCESS_B__0_1_OFFSET UNITYSDK_OFFSET(0xEBCC020)
#define DHDAFNGLHCL___C__HANDLEPOSTPROCESS_B__0_2_OFFSET UNITYSDK_OFFSET(0xEBCC000)
#define DHDAFNGLHCL___C__HANDLEPOSTPROCESS_B__0_3_OFFSET UNITYSDK_OFFSET(0xEBCC230)

inline static constexpr unsigned int DHDAFNGLHCL___c_TypeDefinitionIndex = 67148;

	class DHDAFNGLHCL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52280);
		}

		static ::System::Func_2<::System::Collections::Generic::IEnumerable_1<::NONJMIHBLMK*>*, ::NONJMIHBLMK*>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::System::Collections::Generic::IEnumerable_1<::NONJMIHBLMK*>*, ::NONJMIHBLMK*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52288);
		}

		static ::System::Func_2<::NONJMIHBLMK*, ::System::UInt32>** StaticGet___9__0_2()
		{
			return (::System::Func_2<::NONJMIHBLMK*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52290);
		}

		static ::System::Func_2<::System::Collections::Generic::IEnumerable_1<::DEHHODAHDMH*>*, ::DEHHODAHDMH*>** StaticGet___9__0_1()
		{
			return (::System::Func_2<::System::Collections::Generic::IEnumerable_1<::DEHHODAHDMH*>*, ::DEHHODAHDMH*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52298);
		}

		static ::System::Func_2<::DEHHODAHDMH*, ::System::UInt32>** StaticGet___9__0_3()
		{
			return (::System::Func_2<::DEHHODAHDMH*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x522A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHDAFNGLHCL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHDAFNGLHCL___C_CTOR_OFFSET))(this);
		}

		::NONJMIHBLMK* _HandlePostProcess_b__0_0(::System::Collections::Generic::IEnumerable_1<::NONJMIHBLMK*>* a1)
		{
			return ((::NONJMIHBLMK*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::NONJMIHBLMK*>*))((::PBYTE)hIl2Cpp + DHDAFNGLHCL___C__HANDLEPOSTPROCESS_B__0_0_OFFSET))(this, a1);
		}

		::System::UInt32 _HandlePostProcess_b__0_2(::NONJMIHBLMK* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::NONJMIHBLMK*))((::PBYTE)hIl2Cpp + DHDAFNGLHCL___C__HANDLEPOSTPROCESS_B__0_2_OFFSET))(this, a1);
		}

		::DEHHODAHDMH* _HandlePostProcess_b__0_1(::System::Collections::Generic::IEnumerable_1<::DEHHODAHDMH*>* a1)
		{
			return ((::DEHHODAHDMH*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::DEHHODAHDMH*>*))((::PBYTE)hIl2Cpp + DHDAFNGLHCL___C__HANDLEPOSTPROCESS_B__0_1_OFFSET))(this, a1);
		}

		::System::UInt32 _HandlePostProcess_b__0_3(::DEHHODAHDMH* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::DEHHODAHDMH*))((::PBYTE)hIl2Cpp + DHDAFNGLHCL___C__HANDLEPOSTPROCESS_B__0_3_OFFSET))(this, a1);
		}

	};
