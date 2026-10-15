#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PLHLAIJKMOD.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class DIGCDGKOBMK;
class FBKKFMONGAA;
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define IAJGGEMFOMB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15E13430)
#define IAJGGEMFOMB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15E13470)
#define IAJGGEMFOMB___C___CTOR_B__57_11_OFFSET UNITYSDK_OFFSET(0x15E134A0)
#define IAJGGEMFOMB___C___CTOR_B__57_3_OFFSET UNITYSDK_OFFSET(0x15E13480)
#define IAJGGEMFOMB___C___GETBUFFAFFECTINGCELLS_B__63_0_OFFSET UNITYSDK_OFFSET(0x15E134D0)
#define IAJGGEMFOMB___C___GETBUFFAFFECTINGCELLS_B__63_1_OFFSET UNITYSDK_OFFSET(0x15E13540)

inline static constexpr unsigned int IAJGGEMFOMB___c_TypeDefinitionIndex = 79481;

	class IAJGGEMFOMB___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::DIGCDGKOBMK*, ::FBKKFMONGAA*>** StaticGet___9__63_0()
		{
			return (::System::Func_2<::DIGCDGKOBMK*, ::FBKKFMONGAA*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41A30);
		}

		static ::System::Func_2<::FBKKFMONGAA*, ::System::Boolean>** StaticGet___9__63_1()
		{
			return (::System::Func_2<::FBKKFMONGAA*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41A38);
		}

		static ::System::Func_4<::PLHLAIJKMOD, ::System::Boolean, ::System::Boolean, ::System::ValueTuple>** StaticGet___9__57_11()
		{
			return (::System::Func_4<::PLHLAIJKMOD, ::System::Boolean, ::System::Boolean, ::System::ValueTuple>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41A40);
		}

		static ::System::Func_3<::PLHLAIJKMOD, ::System::Boolean, ::System::ValueTuple>** StaticGet___9__57_3()
		{
			return (::System::Func_3<::PLHLAIJKMOD, ::System::Boolean, ::System::ValueTuple>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41A48);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41A50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IAJGGEMFOMB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAJGGEMFOMB___C_CTOR_OFFSET))(this);
		}

		::System::ValueTuple __ctor_b__57_3(::PLHLAIJKMOD a1, ::System::Boolean a2)
		{
			return ((::System::ValueTuple(*)(::PVOID, ::PLHLAIJKMOD, ::System::Boolean))((::PBYTE)hIl2Cpp + IAJGGEMFOMB___C___CTOR_B__57_3_OFFSET))(this, a1, a2);
		}

		::System::ValueTuple __ctor_b__57_11(::PLHLAIJKMOD a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::ValueTuple(*)(::PVOID, ::PLHLAIJKMOD, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + IAJGGEMFOMB___C___CTOR_B__57_11_OFFSET))(this, a1, a2, a3);
		}

		::FBKKFMONGAA* __GetBuffAffectingCells_b__63_0(::DIGCDGKOBMK* a1)
		{
			return ((::FBKKFMONGAA*(*)(::PVOID, ::DIGCDGKOBMK*))((::PBYTE)hIl2Cpp + IAJGGEMFOMB___C___GETBUFFAFFECTINGCELLS_B__63_0_OFFSET))(this, a1);
		}

		::System::Boolean __GetBuffAffectingCells_b__63_1(::FBKKFMONGAA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FBKKFMONGAA*))((::PBYTE)hIl2Cpp + IAJGGEMFOMB___C___GETBUFFAFFECTINGCELLS_B__63_1_OFFSET))(this, a1);
		}

	};
