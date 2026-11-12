#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/Emit/OpCode.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_REFLECTION_EMIT_OPCODES_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D426C90)

namespace System::Reflection::Emit
{
	inline static constexpr unsigned int OpCodes_TypeDefinitionIndex = 654;

	class OpCodes : public ::System::Object
	{
	public:
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_U4()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x5E80);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_U2()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x5E88);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U4()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x5E90);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Stelem_R8()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x5E98);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U1()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x5EA0);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldfld()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x5EA8);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_Ref()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x5EB0);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U4_Un()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x5EB8);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Initobj()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x5EC0);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Calli()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x5EC8);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I8()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x5ED0);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Prefix6()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x5ED8);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Sizeof()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x5EE0);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Add()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x5EE8);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Localloc()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x5EF0);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Stind_I8()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x5EF8);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_R4()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x5F00);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_I8()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x5F08);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_0()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x5F10);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_I4()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x5F18);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Starg()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x5F20);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Arglist()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x5F28);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x5F30);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Starg_S()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x5F38);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Cgt_Un()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x5F40);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_R4()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x5F48);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Refanyval()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x5F50);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Brtrue()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x5F58);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_Ref()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x5F60);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelema()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x5F68);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldvirtftn()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x5F70);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U2()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x5F78);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_I1()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x5F80);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x5F88);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Prefix2()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x5F90);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldftn()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x5F98);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Stloc_0()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x5FA0);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Blt_S()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x5FA8);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ckfinite()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x5FB0);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Endfinally()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x5FB8);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldsflda()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x5FC0);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_1()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x5FC8);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Cpobj()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x5FD0);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_U8()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x5FD8);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_R8()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x5FE0);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Prefix4()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x5FE8);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Bgt_S()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x5FF0);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Rem_Un()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x5FF8);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_I1()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6000);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Stloc_1()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6008);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Bne_Un_S()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6010);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_I4()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6018);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Stind_R4()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6020);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Bgt_Un()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6028);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Jmp()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6030);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Stelem_Ref()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6038);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_U4()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6040);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Cpblk()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6048);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldloc_2()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6050);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I8()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6058);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Unbox_Any()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6060);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Brfalse()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6068);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Stelem_I4()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6070);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Beq()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6078);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Rethrow()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6080);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Sub_Ovf_Un()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6088);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_2()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6090);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Add_Ovf_Un()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6098);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Shr()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x60A0);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Clt_Un()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x60A8);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Constrained()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x60B0);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Nop()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x60B8);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Stloc_S()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x60C0);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldloc_S()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x60C8);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldarg_3()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x60D0);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_I()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x60D8);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Refanytype()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x60E0);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Stind_I1()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x60E8);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldobj()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x60F0);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Stelem_R4()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x60F8);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldloc_3()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6100);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U1_Un()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6108);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_I2()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6110);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Prefix5()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6118);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Volatile()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6120);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ble_Un()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6128);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Not()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6130);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldarg_1()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6138);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ble_Un_S()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6140);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ret()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6148);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Bge_S()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6150);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldflda()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6158);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_I4()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6160);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Clt()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6168);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Bgt()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6170);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Or()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6178);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Blt()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6180);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Stind_R8()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6188);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_U()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6190);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I2_Un()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6198);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x61A0);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_R8()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x61A8);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Box()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x61B0);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Prefixref()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x61B8);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Break()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x61C0);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Stfld()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x61C8);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I_Un()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x61D0);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldlen()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x61D8);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_5()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x61E0);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldarg_0()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x61E8);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_7()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x61F0);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Div()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x61F8);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_U1()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6200);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Sub()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6208);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Mul_Ovf()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6210);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_And()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6218);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Stobj()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6220);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldarg()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6228);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Dup()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6230);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldloc_1()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6238);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6240);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_M1()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6248);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Leave()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6250);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Throw()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6258);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Mul()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6260);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Bge()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6268);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I8_Un()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6270);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I4()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6278);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldtoken()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6280);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Call()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6288);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Stelem_I8()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6290);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_U2()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6298);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Br()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x62A0);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ceq()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x62A8);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_R_Un()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x62B0);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_3()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x62B8);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Brfalse_S()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x62C0);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Xor()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x62C8);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Prefix7()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x62D0);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldarga()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x62D8);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I1_Un()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x62E0);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Shr_Un()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x62E8);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I4_Un()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x62F0);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Pop()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x62F8);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Bge_Un_S()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6300);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Stind_I()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6308);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U8_Un()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6310);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Stloc_3()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6318);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_R4()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6320);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Shl()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6328);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ble()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6330);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_R8()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6338);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Switch()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6340);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Isinst()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6348);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_U2()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6350);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_I8()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6358);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Stsfld()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6360);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Stloc()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6368);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Prefix3()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6370);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Stelem_I1()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6378);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldloc()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6380);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Blt_Un_S()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6388);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Readonly()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6390);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_R4()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6398);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldnull()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x63A0);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I2()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x63A8);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Br_S()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x63B0);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Cgt()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x63B8);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Endfilter()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x63C0);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_U1()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x63C8);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldloca()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x63D0);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Stind_I4()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x63D8);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Unaligned()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x63E0);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U_Un()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x63E8);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Bge_Un()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x63F0);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_6()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x63F8);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Stelem_I()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6400);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Rem()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6408);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_I2()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6410);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_I()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6418);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U2_Un()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6420);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_4()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6428);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_I2()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6430);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Stelem()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6438);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldarg_S()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6440);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Beq_S()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6448);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Castclass()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6450);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Stind_Ref()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6458);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Blt_Un()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6460);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldarga_S()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6468);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Initblk()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6470);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldloca_S()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6478);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I1()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6480);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Bne_Un()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6488);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_U1()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6490);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Sub_Ovf()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6498);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Brtrue_S()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x64A0);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_I8()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x64A8);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldloc_0()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x64B0);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Stelem_I2()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x64B8);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Mul_Ovf_Un()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x64C0);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Prefix1()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x64C8);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_S()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x64D0);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Stloc_2()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x64D8);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Neg()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x64E0);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_I()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x64E8);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_I1()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x64F0);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U8()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x64F8);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Callvirt()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6500);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Div_Un()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6508);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Tailcall()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6510);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Newobj()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6518);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ble_S()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6520);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Bgt_Un_S()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6528);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Add_Ovf()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6530);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_U4()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6538);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Mkrefany()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6540);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_8()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6548);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldsfld()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6550);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldarg_2()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6558);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Stind_I2()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6560);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldstr()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6568);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_R8()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6570);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Unbox()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6578);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Newarr()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6580);
		}

		static ::System::Reflection::Emit::OpCode* StaticGet_Leave_S()
		{
			return (::System::Reflection::Emit::OpCode*)UnitySDK::FromName("System.Reflection.Emit", "OpCodes")->GetStaticField(0x6588);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_OPCODES_CCTOR_OFFSET))();
		}

	};
}
