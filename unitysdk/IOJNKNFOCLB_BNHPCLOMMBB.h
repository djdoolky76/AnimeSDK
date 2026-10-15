#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IOJNKNFOCLB_BNHPCLOMMBB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC8D520)
#define IOJNKNFOCLB_BNHPCLOMMBB_FPLHKFLJOFB_OFFSET UNITYSDK_OFFSET(0x1CC871E0)
#define IOJNKNFOCLB_BNHPCLOMMBB_JBIGDGNAFJL_OFFSET UNITYSDK_OFFSET(0x1CC8D4A0)
#define IOJNKNFOCLB_BNHPCLOMMBB_PFFIPKOGJLJ_OFFSET UNITYSDK_OFFSET(0x1CC8D470)

inline static constexpr unsigned int IOJNKNFOCLB_BNHPCLOMMBB_TypeDefinitionIndex = 43850;

	class IOJNKNFOCLB_BNHPCLOMMBB : public ::System::Object
	{
	public:
		static ::System::IntPtr* StaticGet_HODGALFKEGA()
		{
			return (::System::IntPtr*)UnitySDK::FromName("", "BNHPCLOMMBB")->GetStaticField(0x690);
		}

		static ::System::Int32* StaticGet_IHOMLDBACHD()
		{
			return (::System::Int32*)UnitySDK::FromName("", "BNHPCLOMMBB")->GetStaticField(0x698);
		}

		// static const ::System::Object JOIKKEPFPBH; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IOJNKNFOCLB_BNHPCLOMMBB_CCTOR_OFFSET))();
		}

		static ::System::Int32 PFFIPKOGJLJ()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + IOJNKNFOCLB_BNHPCLOMMBB_PFFIPKOGJLJ_OFFSET))();
		}

		static ::System::Void FPLHKFLJOFB(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + IOJNKNFOCLB_BNHPCLOMMBB_FPLHKFLJOFB_OFFSET))(a1);
		}

		static ::System::Void JBIGDGNAFJL()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IOJNKNFOCLB_BNHPCLOMMBB_JBIGDGNAFJL_OFFSET))();
		}

	};
