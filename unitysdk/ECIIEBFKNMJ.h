#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChimeraDuel/ChimeraDuelLogLevel.h"
class BKOBHMFCKJH;
class HAJDFCHFBGN;
class HDPFOEOKDDB;
class IACBBGPHHJM;
class IPAAKFNPFFJ;
class JNBAOJJFFBL;
class LEHAHJKOHKP;
class LMJPODEEGKK;
class MDHIBNLFCFL;
class OMFDCMJIAHG;
class OMKCHHDANDK;

#define ECIIEBFKNMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x13ABEFC0)
#define ECIIEBFKNMJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13ABF3E0)
#define ECIIEBFKNMJ_GET_CHIMERADUELEVENTSERVICE_OFFSET UNITYSDK_OFFSET(0x13ABF780)
#define ECIIEBFKNMJ_GET_DESTROYSERVICE_OFFSET UNITYSDK_OFFSET(0x13ABF820)
#define ECIIEBFKNMJ_GET_EFFECTSERVICE_OFFSET UNITYSDK_OFFSET(0x13ABF760)
#define ECIIEBFKNMJ_GET_ENTITYFACTORYSERVICE_OFFSET UNITYSDK_OFFSET(0x13ABF7A0)
#define ECIIEBFKNMJ_GET_LOGSERVICE_OFFSET UNITYSDK_OFFSET(0x13ABF720)
#define ECIIEBFKNMJ_GET_MODIFYSERVICE_OFFSET UNITYSDK_OFFSET(0x13ABF7C0)
#define ECIIEBFKNMJ_GET_QUERYSERVICE_OFFSET UNITYSDK_OFFSET(0x13ABF740)
#define ECIIEBFKNMJ_GET_RANDOMSERVICE_OFFSET UNITYSDK_OFFSET(0x13ABF7E0)
#define ECIIEBFKNMJ_GET_UIDSERVICE_OFFSET UNITYSDK_OFFSET(0x13ABF840)
#define ECIIEBFKNMJ_GET_VIEWSERVICE_OFFSET UNITYSDK_OFFSET(0x13ABF800)
#define ECIIEBFKNMJ_SET_CHIMERADUELEVENTSERVICE_OFFSET UNITYSDK_OFFSET(0x13ABF790)
#define ECIIEBFKNMJ_SET_DESTROYSERVICE_OFFSET UNITYSDK_OFFSET(0x13ABF830)
#define ECIIEBFKNMJ_SET_EFFECTSERVICE_OFFSET UNITYSDK_OFFSET(0x13ABF770)
#define ECIIEBFKNMJ_SET_ENTITYFACTORYSERVICE_OFFSET UNITYSDK_OFFSET(0x13ABF7B0)
#define ECIIEBFKNMJ_SET_LOGSERVICE_OFFSET UNITYSDK_OFFSET(0x13ABF730)
#define ECIIEBFKNMJ_SET_MODIFYSERVICE_OFFSET UNITYSDK_OFFSET(0x13ABF7D0)
#define ECIIEBFKNMJ_SET_QUERYSERVICE_OFFSET UNITYSDK_OFFSET(0x13ABF750)
#define ECIIEBFKNMJ_SET_RANDOMSERVICE_OFFSET UNITYSDK_OFFSET(0x13ABF7F0)
#define ECIIEBFKNMJ_SET_UIDSERVICE_OFFSET UNITYSDK_OFFSET(0x13ABF850)
#define ECIIEBFKNMJ_SET_VIEWSERVICE_OFFSET UNITYSDK_OFFSET(0x13ABF810)

inline static constexpr unsigned int ECIIEBFKNMJ_TypeDefinitionIndex = 80150;

	class ECIIEBFKNMJ
	{
	public:
		::OMFDCMJIAHG* _EffectService_k__BackingField; // 0x90
		::LMJPODEEGKK* FKINCGODJEP; // 0x98
		::OMKCHHDANDK* _DestroyService_k__BackingField; // 0xA0
		::BKOBHMFCKJH* _ChimeraDuelEventService_k__BackingField; // 0xA8
		::LEHAHJKOHKP* _ModifyService_k__BackingField; // 0xB0
		::MDHIBNLFCFL* _EntityFactoryService_k__BackingField; // 0xB8
		::IPAAKFNPFFJ* _ViewService_k__BackingField; // 0xC0
		::HDPFOEOKDDB* _LogService_k__BackingField; // 0xC8
		::IACBBGPHHJM* _RandomService_k__BackingField; // 0xD0
		::HAJDFCHFBGN* _QueryService_k__BackingField; // 0xD8
		::JNBAOJJFFBL* _UIDService_k__BackingField; // 0xE0
		::System::Void _ctor(::LMJPODEEGKK* a1, ::System::Int32 a2, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelLogLevel a3)
		{
			return ((::System::Void(*)(::PVOID, ::LMJPODEEGKK*, ::System::Int32, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelLogLevel))((::PBYTE)hIl2Cpp + ECIIEBFKNMJ_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECIIEBFKNMJ_DISPOSE_OFFSET))(this);
		}

		::HDPFOEOKDDB* get_LogService()
		{
			return ((::HDPFOEOKDDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECIIEBFKNMJ_GET_LOGSERVICE_OFFSET))(this);
		}

		::System::Void set_LogService(::HDPFOEOKDDB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HDPFOEOKDDB*))((::PBYTE)hIl2Cpp + ECIIEBFKNMJ_SET_LOGSERVICE_OFFSET))(this, a1);
		}

		::HAJDFCHFBGN* get_QueryService()
		{
			return ((::HAJDFCHFBGN*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECIIEBFKNMJ_GET_QUERYSERVICE_OFFSET))(this);
		}

		::System::Void set_QueryService(::HAJDFCHFBGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HAJDFCHFBGN*))((::PBYTE)hIl2Cpp + ECIIEBFKNMJ_SET_QUERYSERVICE_OFFSET))(this, a1);
		}

		::OMFDCMJIAHG* get_EffectService()
		{
			return ((::OMFDCMJIAHG*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECIIEBFKNMJ_GET_EFFECTSERVICE_OFFSET))(this);
		}

		::System::Void set_EffectService(::OMFDCMJIAHG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMFDCMJIAHG*))((::PBYTE)hIl2Cpp + ECIIEBFKNMJ_SET_EFFECTSERVICE_OFFSET))(this, a1);
		}

		::BKOBHMFCKJH* get_ChimeraDuelEventService()
		{
			return ((::BKOBHMFCKJH*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECIIEBFKNMJ_GET_CHIMERADUELEVENTSERVICE_OFFSET))(this);
		}

		::System::Void set_ChimeraDuelEventService(::BKOBHMFCKJH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BKOBHMFCKJH*))((::PBYTE)hIl2Cpp + ECIIEBFKNMJ_SET_CHIMERADUELEVENTSERVICE_OFFSET))(this, a1);
		}

		::MDHIBNLFCFL* get_EntityFactoryService()
		{
			return ((::MDHIBNLFCFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECIIEBFKNMJ_GET_ENTITYFACTORYSERVICE_OFFSET))(this);
		}

		::System::Void set_EntityFactoryService(::MDHIBNLFCFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDHIBNLFCFL*))((::PBYTE)hIl2Cpp + ECIIEBFKNMJ_SET_ENTITYFACTORYSERVICE_OFFSET))(this, a1);
		}

		::LEHAHJKOHKP* get_ModifyService()
		{
			return ((::LEHAHJKOHKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECIIEBFKNMJ_GET_MODIFYSERVICE_OFFSET))(this);
		}

		::System::Void set_ModifyService(::LEHAHJKOHKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LEHAHJKOHKP*))((::PBYTE)hIl2Cpp + ECIIEBFKNMJ_SET_MODIFYSERVICE_OFFSET))(this, a1);
		}

		::IACBBGPHHJM* get_RandomService()
		{
			return ((::IACBBGPHHJM*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECIIEBFKNMJ_GET_RANDOMSERVICE_OFFSET))(this);
		}

		::System::Void set_RandomService(::IACBBGPHHJM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IACBBGPHHJM*))((::PBYTE)hIl2Cpp + ECIIEBFKNMJ_SET_RANDOMSERVICE_OFFSET))(this, a1);
		}

		::IPAAKFNPFFJ* get_ViewService()
		{
			return ((::IPAAKFNPFFJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECIIEBFKNMJ_GET_VIEWSERVICE_OFFSET))(this);
		}

		::System::Void set_ViewService(::IPAAKFNPFFJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IPAAKFNPFFJ*))((::PBYTE)hIl2Cpp + ECIIEBFKNMJ_SET_VIEWSERVICE_OFFSET))(this, a1);
		}

		::OMKCHHDANDK* get_DestroyService()
		{
			return ((::OMKCHHDANDK*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECIIEBFKNMJ_GET_DESTROYSERVICE_OFFSET))(this);
		}

		::System::Void set_DestroyService(::OMKCHHDANDK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMKCHHDANDK*))((::PBYTE)hIl2Cpp + ECIIEBFKNMJ_SET_DESTROYSERVICE_OFFSET))(this, a1);
		}

		::JNBAOJJFFBL* get_UIDService()
		{
			return ((::JNBAOJJFFBL*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECIIEBFKNMJ_GET_UIDSERVICE_OFFSET))(this);
		}

		::System::Void set_UIDService(::JNBAOJJFFBL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JNBAOJJFFBL*))((::PBYTE)hIl2Cpp + ECIIEBFKNMJ_SET_UIDSERVICE_OFFSET))(this, a1);
		}

	};
